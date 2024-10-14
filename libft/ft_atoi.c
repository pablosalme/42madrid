/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:31:59 by pablo             #+#    #+#             */
/*   Updated: 2024/10/14 02:41:32 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Converts a nptring to an integer */
int	ft_atoi(const char	*nptr)
{
	int	result;
	int	menos;
	int	sign_count;

	sign_count = 0;
	result = 0;
	menos = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	while (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			menos *= -1;
		nptr++;
		sign_count++;
		if (sign_count > 1)
			return (0);
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + *nptr - '0';
		nptr++;
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
