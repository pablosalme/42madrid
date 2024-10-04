/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:25:08 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/04 21:25:21 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Converts an uppercase letter to lowercase */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int main(void)
{
	char test = 'H';

	char lower = ft_tolower(test);
	printf("%c antes de pasar por la funcion\n", test);
	printf("%c despues de pasar por la funcion", lower);
	return 0;
}
*/
