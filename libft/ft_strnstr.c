/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:03:11 by pablo             #+#    #+#             */
/*   Updated: 2024/10/08 00:44:33 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Locates a substring within a string, limited to len bytes */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	if (haystack == NULL || len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j]
			&& (i + j) < len)
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	const char	string[] = "Hola que tal";
	const char	buscar[] = "que";
	const char	buscar1[] = "nada";

	printf("%s\n", ft_strnstr(string, buscar, 10));
	printf("%s\n", ft_strnstr(string, buscar1, 10));

	return (0);
}*/
