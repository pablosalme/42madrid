/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:23:56 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/01 02:50:02 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dsts)
{
	unsigned int	i;

	i = 0;
	if (dsts > 0)
	{
		while (i < dsts -1 && src[i] != '\0')
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
