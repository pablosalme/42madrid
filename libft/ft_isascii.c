/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:32:05 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/04 21:22:26 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Checks if the input is an ASCII character */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main(void)
{
	//char	test = 'a';
	char	test = U'ä'; // special unicode

	if (ft_isascii(test))
		printf("Es ascii");
	else
		printf("No es ascii");
	return (0);
}
*/
