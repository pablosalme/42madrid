/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:03:11 by pablo             #+#    #+#             */
/*   Updated: 2024/10/14 02:46:33 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Locates a substring within a string, limited to len bytes */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j]
			&& (i + j) < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(big + i));
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
