/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:14:35 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/20 01:07:24 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
char	*ft_strchr(char *s, int c);

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
	//char	*temp;
	char	*line;
	char	*buffer;
	ssize_t	n_bytes;


	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	line = ft_strdup("");
	n_bytes = 1;
	n_line = ft_strdup("");
	while (n_bytes > 0 && ft_strchr(line, 10) == NULL)
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
		if (n_line == NULL)
		{
			line = ft_strjoin(line, buffer);
		}
		else
		{
			line = ft_strjoin(n_line, buffer);
			n_line = NULL;
		}
		free(buffer);
	}
	return (line);
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
