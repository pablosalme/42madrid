/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:43:17 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/04 21:25:02 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Checks if the input is an alphanumeric character */
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char test = '*';

	if (ft_isalnum(test))
		printf("%c es una letra o un numero", test);
	else
		printf("%c no es una letra o un numero", test);
	return (0);
}*/
