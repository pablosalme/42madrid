/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:41:28 by pablo             #+#    #+#             */
/*   Updated: 2024/10/06 19:37:54 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_subs(char const *s, char c)
{
	int	cuenta;
	int	en_palabra;

	cuenta = 0;
	en_palabra = 0;
	while (*s)
	{
		if (*s != c && !en_palabra)
		{
			en_palabra = 1;
			cuenta++;
		}
		else if (*s == c)
			en_palabra = 0;
		s++;
	}
	return (cuenta);
}

static char	*word_dup(const char *s, int start, int end)
{
	char	*palabra;
	int		i;

	palabra = malloc((end - start + 1) * sizeof(char));
	if (!palabra)
		return (NULL);
	i = 0;
	while (start < end)
		palabra[i++] = s[start++];
	palabra[i] = '\0';
	return (palabra);
}

static void	free_words(char **words, int j)
{
	while (j >= 0)
		free(words[j--]);
	free(words);
}

static char	**allocate_and_split(char const *s, char c, char **resultado)
{
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			resultado[j] = word_dup(s, start, i);
			if (!resultado[j++])
				return (free_words(resultado, j - 1), NULL);
		}
		else
			i++;
	}
	resultado[j] = NULL;
	return (resultado);
}

char	**ft_split(char const *s, char c)
{
	char	**resultado;

	if (!s)
		return (NULL);
	resultado = malloc((count_subs(s, c) + 1) * sizeof(char *));
	if (!resultado)
		return (NULL);
	return (allocate_and_split(s, c, resultado));
}

/*int	main(void)
{
	char	**resultado;
	int		i;

	resultado = ft_split("Hola mundo 42", 'o');
	if (!resultado)
		return (1);
	i = 0;
	while (resultado[i])
	{
		printf("Subcadena: %s\n", resultado[i]);
		free(resultado[i]);
		i++;
	}
	free(resultado);
	return (0);
}*/
