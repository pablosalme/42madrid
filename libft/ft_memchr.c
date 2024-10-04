/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 03:18:05 by pablo             #+#    #+#             */
/*   Updated: 2024/10/04 21:23:54 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Searches for a byte in a block of memory */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;
	unsigned char		cast_c;

	cast_c = (unsigned char)c;
	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == cast_c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	const char test[] = "hola que tal";
	char *result;

	result = ft_memchr(test, 'q', strlen(test));
	printf("%s\n", result);

	return 0;
}*/
