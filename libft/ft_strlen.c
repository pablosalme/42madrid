/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 23:50:20 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/14 02:43:40 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Returns the length of a string */
size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/*int main(void)
{
	char *str = "Pepe";

	printf("strlen: %lu", strlen(str));
	printf("ft_strlen: %d", ft_strlen(str));
	return 0;
}*/
