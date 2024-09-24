/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@stundet.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 23:50:20 by psalmero          #+#    #+#             */
/*   Updated: 2024/09/24 20:14:22 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <libc.h>*/
#include "libft.h"

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
