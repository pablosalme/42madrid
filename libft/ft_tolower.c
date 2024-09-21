/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@stundet.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:25:08 by psalmero          #+#    #+#             */
/*   Updated: 2024/09/21 01:31:23 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
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
