/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-20 17:08:32 by psalmero          #+#    #+#             */
/*   Updated: 2024-10-20 17:08:32 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		len_s1;
	int		len_s2;
	int		i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!result)
		return (0);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	ft_strlcat(result, s2, len_s1 + len_s2 + 1);
	return (result);
}

size_t	ft_strlen(const char *str)
{
	int	len;

	if (!str)
		return (0);
	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(const char	*s)
{
	char	*save;
	unsigned int	i;

	i = 0;
	save = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (save == NULL)
		return (NULL);
	while (s[i])
	{
		save[i] = s[i];
		i++;
	}
	save[i] = 0;
	return (save);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	size_t			s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len - start)
		len = s_len - start;
	if (start > (unsigned int)s_len)
		len = 0;
	substr = (char *)(malloc((len + 1) * sizeof(char)));
	if (!substr)
		return (NULL);
	i = 0;
	while (start < s_len && s[start + i] != '\0' && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = 0;
	len_s = 0;
	while (dst[len_d] != '\0' && len_d < size)
		len_d++;
	while (src[len_s] != '\0')
		len_s++;
	if (size <= len_d)
		return (len_s + size);
	i = 0;
	while (src[i] != '\0' && (len_d + i + 1) < size)
	{
		dst[len_d + i] = src [i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}
