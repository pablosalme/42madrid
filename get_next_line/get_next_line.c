/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:14:35 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/18 21:24:02 by pablo            ###   ########.fr       */
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
