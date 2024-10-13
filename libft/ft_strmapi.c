/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:03:11 by pablo             #+#    #+#             */
/*   Updated: 2024/10/13 01:47:49 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Apply f function to all characters from s*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*char	ft_tolower_odd(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	else
		return (ft_tolower(c));
}
int	main(void)
{
	char	*str = "hola que tal";
	char	*result = ft_strmapi(str, ft_tolower_odd);

	if (result)
	{
		printf("Cadena original: %s\n", str);
		printf("Cadena modificada: %s\n", result);
		free(result);
	}else
	{
		printf("Error al asignar mem.");
	}
	return (0);
}*/
