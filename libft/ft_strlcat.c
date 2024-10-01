/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 02:45:20 by pablo             #+#    #+#             */
/*   Updated: 2024/10/01 03:17:12 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dsts)
{
	size_t	i;
	size_t	j;

	if (dsts <= strlen(dst))
		return (dsts + strlen(src));
	i = (strlen(dst));
	j = 0;
	while (i < dsts - 1 && src[j] != '\0')
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (strlen(dst) + ft_strlen(src));
}
/*
int	main(void)
{
	char test[] = "Hola";
	char test1[] = " que tal";
	char dest[50] = "";

	ft_strlcat(dest, test, sizeof(dest));
	printf("%s\n", dest);
	ft_strlcat(dest, test1, sizeof(dest));
	printf("%s", dest);
	return (0);
}*/
