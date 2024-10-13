/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 20:30:57 by pablo             #+#    #+#             */
/*   Updated: 2024/10/13 01:48:13 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Send char to file description*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int	main(void)
{
	int	fd;

	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		write(2, "Error abriendo el archivo", 26);
		return (1);
	}
	ft_putchar_fd('H', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd('l', fd);
	ft_putchar_fd('a', fd);
	close(fd);
	return (0);
}*/
