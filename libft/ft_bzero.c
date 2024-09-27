/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:02:25 by psalmero          #+#    #+#             */
/*   Updated: 2024/09/28 00:26:27 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main(void)
{
	char test[] = "Hola Mundo";

	printf("%s\n", test);
	ft_bzero(test, 4);
	for (int i = 0; i < 12; i++)
	{
		printf("%d\n", test[i]);
	}

	return (0);
}
*/
