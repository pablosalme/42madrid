/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:16:01 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/20 01:30:08 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*get_raw_line(int fd, char *n_line, char *buffer);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char	*s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif
