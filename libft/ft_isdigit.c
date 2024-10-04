/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:24:52 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/04 21:21:17 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Checks if the input is a digit (0-9) */
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*
int main(void)
{
	char test = 's';

	if (ft_isdigit(test))
		printf("%c Es un numero", test);
	else
		printf("%c No es un numero", test);
	return 0;
}
*/
