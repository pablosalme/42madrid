/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@stundet.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 23:50:20 by psalmero          #+#    #+#             */
/*   Updated: 2024/09/21 01:31:16 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <libc.h>*/

int	ft_strlen(char *input_str)
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
