/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 22:57:22 by psalmero          #+#    #+#             */
/*   Updated: 2024/09/28 00:08:36 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <string.h>
# include <stdio.h>

int		ft_isdigit(int c);
size_t	ft_strlen(const char *input_str);
int		ft_isalpha(int c);
void	*ft_memset(void *s, int c, size_t n);

#endif
