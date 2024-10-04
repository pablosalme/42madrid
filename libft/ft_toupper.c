/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:12:21 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/04 21:23:14 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Converts a lowercase letter to uppercase */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	char test = 'a';

	char upper = ft_toupper(test);
	printf("%c sin pasar por funcion\n", test);
	printf("%c despues de la funcion", upper);
	return (0);
}
*/
