/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:56:30 by pablo             #+#    #+#             */
/*   Updated: 2024/10/04 21:24:43 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Duplicates a string, allocating memory for the new string */
char	*ft_strdup(const char	*s1)
{
	char	*save;

	save = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (save == NULL)
		return (NULL);
	ft_strlcpy(save, s1, (ft_strlen(s1) + 1));
	return (save);
}
/*int	main(void)
{
	char	fuente[] = "Hola que tal";

	char	*objetivo = ft_strdup(fuente);
	printf("%s", objetivo);
	free(objetivo);
	return (0);
}*/
