/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:52:20 by pablo             #+#    #+#             */
/*   Updated: 2024/10/05 18:11:47 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*resultado;
	int		len_s1;
	int		len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	resultado = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!resultado)
		return (NULL);
	ft_strlcpy(resultado, s1, len_s1 + 1);
	ft_strlcat(resultado, s2, len_s1 + len_s2 + 1);
	return (resultado);
}
/*int	main(void)
{
	char	test[] = "Hola ";
	char	test1[] = "que tal?";
	char	*resultado;

	resultado = ft_strjoin(test, test1);
	printf("%s", resultado);
	free(resultado);
	return (0);
}*/
