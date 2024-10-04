/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:44:06 by pablo             #+#    #+#             */
/*   Updated: 2024/10/04 21:24:35 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Allocates memory for an array and sets it to zero */
void	*ft_calloc(size_t count, size_t size)
{
	void	*reservado;

	reservado = (void *)malloc(count * size);
	if (reservado == NULL)
		return (NULL);
	ft_bzero(reservado, count * size);
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
