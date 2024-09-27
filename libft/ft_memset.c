/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 20:44:40 by psalmero          #+#    #+#             */
/*   Updated: 2024/09/28 00:26:31 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;

	pointer = s;
	while (n > 0)
	{
		*pointer = c;
		pointer++;
		n--;
	}
	return (s);
}
/*
int main(void)
{
    char    test[] = "Hola que tal?";

    printf("%s",(char *)ft_memset(test, 'B', 5));
    return (0);
}*/
