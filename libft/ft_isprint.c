/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@stundet.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:44:31 by psalmero          #+#    #+#             */
/*   Updated: 2024/09/21 02:00:02 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

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
