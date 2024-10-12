/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:31:59 by pablo             #+#    #+#             */
/*   Updated: 2024/10/13 00:17:46 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Converts a string to an integer */
int	ft_atoi(const char	*str)
{
	int	result;
	int	menos;
	int	sign_count;

	sign_count = 0;
	result = 0;
	menos = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			menos *= -1;
		str++;
		sign_count++;
		if (sign_count > 1)
			return (0);
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * menos);
}
/*int	main(void)
{
	char	test[] = "--++--6344ad";
	char	test1[] = "absd123";

	printf("%d\n", ft_atoi(test));
	printf("%d", ft_atoi(test1));

	return (0);
}*/
