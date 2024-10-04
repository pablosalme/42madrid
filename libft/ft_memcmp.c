/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:32:23 by pablo             #+#    #+#             */
/*   Updated: 2024/10/04 21:21:47 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Compares two blocks of memory */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	if (s1 == s2)
		return (0);
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}
/*int	main(void)
{
	const char	*test1 = "Hola";
	const char	*test2 = "Hola";
	const char	*test3 = "Holi";

	printf("%d", ft_memcmp(test3, test1, ft_strlen(test1)));

	return (0);
}*/
