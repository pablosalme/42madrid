/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 23:50:20 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/04 21:21:36 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Returns the length of a string */
size_t	ft_strlen(const char *input_str)
{
	int	len;

	len = 0;
	while (*input_str)
	{
		len++;
		input_str++;
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
