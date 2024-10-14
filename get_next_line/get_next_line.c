/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:14:35 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/14 23:48:02 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buf[512];
	int		chars_read;

	if (fd <= 0)
		return (NULL);
	while ((chars_read = read(fd, buf, 10)))
	{
		buf[chars_read] = '\0';
		printf("\n%s", buf);
	}
	return ("Hola");
}

int	main(void){
	int	fd;

	fd = open("test.txt", O_RDONLY);
	get_next_line(fd);
	return (0);
}
