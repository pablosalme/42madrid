/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 22:54:53 by pablo             #+#    #+#             */
/*   Updated: 2024/10/09 23:38:32 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	special_cases(int n)
{
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	return (0);
}

static int	digit_counter(int n)
{
	int	count;
	int	special_case;

	count = 0;
	special_case = special_cases(n);
	if (special_case)
		return (special_case);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int	exp_counter(int n)
{
	int	exp;
	int	digits;

	exp = 1;
	digits = digit_counter(n);
	if (n < 0)
		digits--;
	while (--digits)
		exp = exp * 10;
	return (exp);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			exp;
	int			i;
	long int	copy;

	copy = (long int)n;
	exp = exp_counter(n);
	i = 0;
	str = malloc(digit_counter(n) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		copy = -copy;
	}
	while (exp > 0)
	{
		str[i++] = (copy / exp) + '0';
		copy = copy % exp;
		exp = exp / 10;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	int nums[] = {0, -2147483648, 1234, -5678, 42, -999};
	char *result;
	int i = 0;

	while (i < 6)
	{
		result = ft_itoa(nums[i]);
		if (result)
		{
			printf("Integer: %d -> String: %s\n", nums[i], result);
			free(result);
		}
		else
		{
			printf("Error al convertir el número: %d\n", nums[i]);
		}
		i++;
	}
	return (0);
}*/
