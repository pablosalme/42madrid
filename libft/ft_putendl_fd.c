/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:09:03 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/13 00:52:51 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*int	main(void)
{
	int	fd;
	char	test[] = "Hola esto es una prueba";

	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == 1)
	{
		printf("Error al abrir el archivo");
		return (1);
	}
	ft_putendl_fd(test, fd);
	close(fd);
	return (0);
}*/
