/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:03:11 by pablo             #+#    #+#             */
/*   Updated: 2024/10/02 20:30:25 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0' || !needle)
		return ((char *)haystack);
	while (haystack && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] != '\0')
				return ((char *)haystack + i);
			j++;
		}
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
