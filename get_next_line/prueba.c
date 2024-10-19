#include "get_next_line.h"

int main(void)
{
	int	fd;
	char	*line;

	// Abrimos el archivo en modo lectura
	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Error al abrir el archivo\n");
		return (1);
	}

	// Llamamos a get_next_line para leer cada línea
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Linea leida: %s\n", line);
		free(line);
	}

	// Cerramos el archivo
	close(fd);
	return (0);
}
char	*get_next_line(int fd)
{
	static char	*n_line;
	char	*line;
	char	*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(n_line);
		free(buffer);
		n_line = NULL;
		buffer = NULL;
		return (NULL);
	}
	line = get_raw_line(fd, n_line, buffer);
	free(buffer);
	buffer = NULL;
	return (line);
}
char	*get_raw_line(int fd, char *n_line, char *buffer)
{
	char	*temp;
	ssize_t	n_bytes;

	n_bytes = 1;
	while (n_bytes > 0)
	{
		n_bytes = read(fd, buffer, BUFFER_SIZE);
		if (n_bytes < 0)
		{
			free(n_line);
			return (NULL);
		}
		else if (n_bytes == 0)
			break;
		buffer[n_bytes] = 0;
		if (!n_line)
			n_line = ft_strdup("");
		temp = n_line;
		n_line = ft_strjoin(temp, buffer);
		free(temp);
		temp = NULL;
		if (ft_strchr(buffer, '\n'))
			break;
	}
	return (n_line);
}
char	*ft_strchr(char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}
