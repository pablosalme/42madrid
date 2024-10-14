/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:33:33 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/14 02:49:30 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Copies n bytes from source to dstination, handling overlap */
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*cast_d;
	const unsigned char	*cast_s;

	if (!dst && !src)
		return (0);
	cast_d = (unsigned char *)dst;
	cast_s = (unsigned char *)src;
	if (cast_d < cast_s)
	{
		while (n--)
			*cast_d++ = *cast_s++;
	}
	else
	{
		while (n--)
			cast_d[n] = cast_s[n];
	}
	return (dst);
}
/*
int	main(void)
{
	char	test[] = "Hola que tal";
	printf("Antes de memmove: %s", test);
	ft_memmove(test + 2, test, sizeof(char) * 2);
	printf("\nDespues de memmove: %s", test);

	return (0);
}*/
