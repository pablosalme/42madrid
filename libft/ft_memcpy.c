/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:37:33 by psalmero          #+#    #+#             */
/*   Updated: 2024/09/28 20:32:34 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cast_d;
	const char	*cast_s;

	i = 0;
	cast_d = dest;
	cast_s = src;
	while (n > i)
	{
		cast_d[i] = cast_s[i];
		i++;
	}
	return (cast_d);
}
/*
int	main(void)
{
	char	test[] = "Hola que tal";
	char	cajon[] = "Adios";

	printf("Cajon antes de memcpy: %s", cajon);
	ft_memcpy(cajon, test, 4);
	printf("\nCajon despues de memcpy: %s", cajon);

	return (0);
}*/
