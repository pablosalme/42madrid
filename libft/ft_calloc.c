/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:44:06 by pablo             #+#    #+#             */
/*   Updated: 2024/10/14 02:50:40 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Allocates memory for an array and sets it to zero */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*reservado;

	reservado = (void *)malloc(nmemb * size);
	if (reservado == NULL)
		return (NULL);
	ft_bzero(reservado, nmemb * size);
	return (reservado);
}
/*int	main(void)
{
	int	*test;

	test = ft_calloc(10, sizeof(int));
	for (int i = 0; i < 10; i++)
		printf("%i", test[i]);
	free(test);
	return(0);
}*/
