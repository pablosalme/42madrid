/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:14:35 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/18 21:12:48 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
char	*ft_strchr(const char *s, int c);

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
	line = get_next_line(fd);
	printf("Linea leida: %s", line);

	// Cerramos el archivo
	close(fd);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*last;
	char	*line;
	char	*buffer;
	char	*temp;
	ssize_t	rbytes;
	char	*newline_pos;

	last = NULL;
	//Espacio para el buffer
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	//Ver si tenemos permisos para leer el archivo
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(buffer);
		return (NULL);
	}
	//Iniciar line como cadena vacia
	line = (char *)malloc(1 * sizeof(char));
	if (!line)
	{
		free(buffer);
		return (NULL);
	}
	line[0] = '\0';
	//Si hay algo en last, lo añado a line
	if (last)
	{
		newline_pos = ft_strchr(last, '\n');
		if (newline_pos)
		{
			*newline_pos = '\0';
			line = ft_strdup(last);
			//Guardar del '\n' en adelante en last
			temp = ft_strdup(newline_pos + 1);
			free(last);
			last = temp;
			free(buffer);
			return (line);
		}
		else
		{
			//Cuando no hay '\n' en last concateno last a line
			line = ft_strdup(last);
			free(last);
			last = NULL;
		}
	}
	//leer hasta el final o salto de linea
	while ((rbytes = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[rbytes] = '\0';
		//ver si buffer tiene salto de linea
		newline_pos = ft_strchr(buffer, '\n');
		if (newline_pos)
		{
			//corto el buffer
			*newline_pos = '\0';
			//concatenar lo leido hasta el salto de linea con line
			temp = ft_strjoin(line, buffer);
			free(line);
			line = temp;
			//guardamos el resto despues del salto del inea en last
			last = ft_strdup(newline_pos + 1);
			free(buffer);
			return (line);
		}
		else
		{
			//no salto de linea en buffer, añadir a line
			temp = ft_strjoin(line, buffer);
			free(line);
			line = temp;
		}
	}
	free (buffer);
	if (rbytes == 0 && *line != '\0')
		return (line);
	free(line);
	return (NULL);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c && *s != '\0')
		s++;
	if (*s == (unsigned char)c)
	{
		return ((char *)s);
	}
	else
	{
		return (NULL);
	}
}
