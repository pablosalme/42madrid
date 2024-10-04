/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:33:33 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/04 21:24:23 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Copies n bytes from source to destination, handling overlap */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cast_d;
	const unsigned char	*cast_s;

	cast_d = (unsigned char *)dest;
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
	return (dest);
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
