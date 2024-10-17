#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

#define BUFFER_SIZE 3

char *ft_strjoin(char *s1, char *s2);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s1);
size_t ft_strlen(const char *s);

static char *update_last(char *last, char *buffer)
{
    char *temp = last;
    last = ft_strjoin(temp, buffer);
    free(temp);
    return last;
}

static int read_from_fd(int fd, char **last)
{
    char *buffer;
    ssize_t rbytes;

    buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buffer)
        return (-1);

    while (1)
    {
        rbytes = read(fd, buffer, BUFFER_SIZE);
        if (rbytes == -1)
        {
            free(buffer);
            return (-1);
        }
        if (rbytes == 0)
        {
            free(buffer);
            return (0);
        }
        buffer[rbytes] = '\0';
        *last = update_last(*last, buffer);
        if (ft_strchr(*last, '\n'))
            break;
    }
    free(buffer);
    return (rbytes);
}

static char *extract_line(char **last)
{
    char *newline_pos = ft_strchr(*last, '\n');
    size_t line_length;
    char *line;

    if (newline_pos)
        line_length = (newline_pos - *last) + 1;
    else
        line_length = ft_strlen(*last);

    line = ft_strdup(*last);
    line[line_length] = '\0';

    if (newline_pos)
    {
        char *new_last = ft_strdup(newline_pos + 1);
        free(*last);
        *last = new_last;
    }
    else
    {
        free(*last);
        *last = NULL;
    }

    return (line);
}

char *get_next_line(int fd)
{
    static char *last = NULL; // Only initialize once

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
        return (NULL);

    if (read_from_fd(fd, &last) == -1)
        return (NULL);

    if (!last || *last == '\0')
    {
        free(last);
        last = NULL;
        return (NULL);
    }

    return (extract_line(&last));
}

int main(void)
{
    int fd;
    char *line;

    fd = open("test.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }

    close(fd);
    return (0);
}

char *ft_strchr(const char *s, int c)
{
    if (!s)
        return (NULL);
    while (*s)
    {
        if (*s == (unsigned char)c)
            return (char *)s;
        s++;
    }
    return (NULL);
}

size_t ft_strlen(const char *s)
{
    size_t len = 0;
    while (s[len])
        len++;
    return len;
}

char *ft_strdup(const char *s1)
{
    size_t len = ft_strlen(s1);
    char *copy = (char *)malloc((len + 1) * sizeof(char));
    if (!copy)
        return NULL;
    for (size_t i = 0; i < len; i++)
        copy[i] = s1[i];
    copy[len] = '\0';
    return copy;
}

char *ft_strjoin(char *s1, char *s2)
{
    if (!s1)
        return ft_strdup(s2);
    if (!s2)
        return ft_strdup(s1);

    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);
    char *joined = (char *)malloc(len1 + len2 + 1);
    if (!joined)
        return NULL;

    for (size_t i = 0; i < len1; i++)
        joined[i] = s1[i];
    for (size_t i = 0; i < len2; i++)
        joined[len1 + i] = s2[i];
    joined[len1 + len2] = '\0';

    return joined;
}
