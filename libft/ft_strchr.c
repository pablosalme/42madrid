/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:55:33 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/04 21:21:53 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Locates the first occurrence of a character in a string */
char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c && *s != '\0')
	{
		s++;
	}
	if (*s == (unsigned char)c)
	{
		return ((char *)s);
	}
	else
	{
		return (NULL);
	}
}
/*
int	main(void)
{
	char	a[50] = "Hola Mundo";

	printf("El resultado de l es: %s\n", ft_strchr(a, 'l'));
	printf("El resultado de j es: %s", ft_strchr(a, 'j'));

	return (0);
}
*/
