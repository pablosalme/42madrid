/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:13:54 by pablo             #+#    #+#             */
/*   Updated: 2024/10/05 18:32:11 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*resultado;
	int		len_s1;
	int		len_set;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	resultado = malloc((len_s1 - len_set) * sizeof(char));

	return (resultado);
}
