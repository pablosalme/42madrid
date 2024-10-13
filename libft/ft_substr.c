/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:24:21 by pablo             #+#    #+#             */
/*   Updated: 2024/10/13 01:50:01 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Create substring from string s*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*resultado;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	resultado = malloc((len + 1) * sizeof(char));
	if (!resultado)
		return (NULL);
	ft_strlcpy(resultado, s + start, len +1);
	return (resultado);
}
/*int	main(void)
{
	char	test[] = "Prueba para ver si funciona";
	char	*resultante;

	resultante = ft_substr(test, 7, 3);
	printf("%s", resultante);
	free(resultante);
	return (0);
}*/
