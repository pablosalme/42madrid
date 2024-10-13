/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:13:54 by pablo             #+#    #+#             */
/*   Updated: 2024/10/13 01:49:29 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Removes all characters from the string set from the beginning and from the
end of s1 from the beginning and from the end of s1*/
static int	ft_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	inicio;
	int	final;

	if (!s1 || !set)
		return (NULL);
	inicio = 0;
	while (s1[inicio] && ft_in_set(s1[inicio], set))
		inicio++;
	final = ft_strlen(s1);
	while (final > inicio && ft_in_set(s1[final - 1], set))
		final --;
	return (ft_substr(s1, inicio, final - inicio));
}
/*int	main(void)
{
	char	test[] = "Hola que tal estas?";
	char	set_test[] = "Hola";
	char	*resultado;

	resultado = ft_strtrim(test, set_test);
	printf("%s", resultado);
	free(resultado);
	return (0);
}*/
