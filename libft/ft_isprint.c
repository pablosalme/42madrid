/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:44:31 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/04 21:22:56 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Checks if the input is a printable character */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	//char	test = 'a';
	char	test = U'ä';

	if (ft_isprint(test))
		printf("%c es printable", test);
	else
		printf("%c no es printable", test);

	return (0);
}
*/
