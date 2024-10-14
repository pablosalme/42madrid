/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:56:30 by pablo             #+#    #+#             */
/*   Updated: 2024/10/14 02:47:03 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Duplicates a string, allocating memory for the new string */
char	*ft_strdup(const char	*s)
{
	char	*save;

	save = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (save == NULL)
		return (NULL);
	ft_strlcpy(save, s, (ft_strlen(s) + 1));
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
