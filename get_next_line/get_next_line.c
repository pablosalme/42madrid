/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:28:59 by psalmero          #+#    #+#             */
/*   Updated: 2025/02/22 21:22:53 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_line(int fd, char *buffer, char *n_line);
static char	*clean_line(char *line);
static char	*ft_strchr(const char *s, int c);

char	*get_next_line(int fd)
{
	static char	*n_line;
	char		*line;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	buffer[0] = '\0';
	line = get_line(fd, buffer, n_line);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	n_line = clean_line(line);
	return (line);
}

static char	*get_line(int fd, char *buffer, char *n_line)
{
	ssize_t	n_bytes;
	char	*temp;

	n_bytes = 1;
	while (!ft_strchr(buffer, '\n') && n_bytes > 0)
	{
		n_bytes = read(fd, buffer, BUFFER_SIZE);
		if (n_bytes < 0)
		{
			free(n_line);
			n_line = NULL;
			return (NULL);
		}
		else if (n_bytes == 0)
			break ;
		buffer[n_bytes] = '\0';
		temp = n_line;
		n_line = ft_strjoin(temp, buffer);
		free(temp);
		temp = NULL;
		if (!n_line)
			return (NULL);
	}
	return (n_line);
}

static char	*clean_line(char *line)
{
	char	*leftover;
	ssize_t	i;
	ssize_t	len_line;

	i = 0;
	len_line = ft_strlen(line);
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	if (line[i] == EOF || line[1] == EOF)
		return (NULL);
	leftover = ft_substr(line, i + 1, len_line - 1);
	if (*leftover == 0)
	{
		free(leftover);
		leftover = NULL;
		return (NULL);
	}
	line[i + 1] = 0;
	return (leftover);
}

static char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

/*int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;

	if (argc != 2)
		return (1);
	i = 0;
	fd = open(argv[1], O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("%d)%s", i, line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	close(fd);
	return (0);
}*/
