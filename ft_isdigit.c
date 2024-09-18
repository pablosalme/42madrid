/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@stundet.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:24:52 by psalmero          #+#    #+#             */
/*   Updated: 2024/09/19 00:44:52 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*
int main(void){
	char test = 's';

	if (ft_isdigit(test))
		printf("%c Es un numero", test);
	else
		printf("%c No es un numero", test);
	return 0;
}
*/
