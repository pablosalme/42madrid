/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:23:56 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/14 02:44:43 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Copies src to dst, ensuring null-termination and limited to len_dize */
size_t	ft_strlcpy(char *dst, const char *src, size_t len_d)
{
	unsigned int	i;

	i = 0;
	if (len_d > 0)
	{
		while (i < len_d - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
//sustituir por strlen el segundo bucle while de la ft
/*
int	main(void)
{
	char	dest[50];
	char	sourc[] = "Hola Mundo";

	printf("%zu", ft_strlcpy(dest, sourc, 20));
}*/
