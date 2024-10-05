/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:24:21 by pablo             #+#    #+#             */
/*   Updated: 2024/10/05 17:51:36 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	ft_strlcpy(resultado, s + start, len);
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
