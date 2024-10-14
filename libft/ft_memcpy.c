/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:37:33 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/14 02:48:47 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Copies n bytes from source to dstination */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*cast_d;
	const unsigned char	*cast_s;

	if (!dst && !src)
		return (0);
	i = 0;
	cast_d = (unsigned char *)dst;
	cast_s = (unsigned char *)src;
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
