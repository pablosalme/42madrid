/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@stundet.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:55:33 by psalmero          #+#    #+#             */
/*   Updated: 2024/09/21 18:16:27 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
