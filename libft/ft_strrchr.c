/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:17:10 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/04 21:23:21 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Locates the last occurrence of a character in a string */
char	*ft_strrchr(const char *s, int c)
{
	const char	*ult;

	ult = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			ult = s;
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return ((char *)ult);
}
/*
int	main(void)
{
	char str[] = "Hola Mundo";

	char *resultado1 = ft_strrchr(str, 'o');
	char *resultado2 = ft_strrchr(str, 'M');
	char *resultado3 = ft_strrchr(str, 'j');
	char *resultado4 = ft_strrchr(str, '\0');
	printf("%s\n",resultado1);
	printf("%s\n",resultado2);
	if (!resultado3)
		printf("No se ha encontrado 'j'\n");
	if (resultado4)
		printf("estas buscando '\\0'\n");
	return (0);
}*/
