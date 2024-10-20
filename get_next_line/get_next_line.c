
#include "get_next_line.h"
char	*ft_strchr(const char *s, int c);

int main(void)
{
	int	fd;
	char	*line;
	int	i;

	i = 0;

	// Abrimos el archivo en modo lectura
	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Error al abrir el archivo\n");
		return (1);
	}
	line = "";
	// Llamamos a get_next_line para leer cada línea
	while (i < 3)
	{
		line = get_next_line(fd);
		printf("Linea leida: %s\n", line);
		i++;
	}

	// Cerramos el archivo
	close(fd);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*n_line;
	char	*temp;
	char	*line;
	char	*buffer;
	ssize_t	n_bytes;
	size_t	len;
	char	*f_line;


	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_strdup("");
	n_bytes = 1;
	n_line = ft_strdup("");
	while (n_bytes > 0 && ft_strchr(line, '\n') == NULL)
	{
		buffer = (char	*)malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!buffer)
			return (NULL);
		n_bytes = read(fd, buffer, BUFFER_SIZE);
		if (n_bytes < 0)
		{
			free(n_line);
			return (NULL);
		}
		else if (n_bytes == 0)
			break;
		buffer[n_bytes] = 0;
		//MIRAR CONDICION (PROBAR PONERLA AL REVES)
		if (n_line != NULL)
		{
			line = ft_strjoin(n_line, buffer);
			n_line = NULL;
		}
		else
		{
			line = ft_strjoin(line, buffer);
		}
		free(buffer);
	}
	temp = ft_strchr(line, '\n');
	len = (ft_strlen(line) - ft_strlen(temp));
	f_line = ft_substr(line, 0, len);
	n_line = ft_substr(temp, 1, (ft_strlen(temp) - 1));
	printf("%s\n", n_line);
	free(line);
	return (f_line);
}
char	*ft_strchr(const char *s, int c)
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
