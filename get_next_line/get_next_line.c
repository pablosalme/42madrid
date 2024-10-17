/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:14:35 by psalmero          #+#    #+#             */
/*   Updated: 2024/10/17 02:18:01 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}

char	*get_next_line(int fd)
{
	//static char	*last;
	char	*line;
	char	*buffer;
	char	*temp;
	ssize_t	rbytes;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(buffer);
		return (NULL);
	}
	line = malloc(1);
	if (!line)
	{
		free(line);
		return (NULL);
	}
	line[0] = '\0';
	while ((rbytes = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[rbytes] = '\0';
		temp = line;
		line = ft_strjoin(temp, buffer);
		free(temp);
		if (ft_strrchr(buffer, '\n'))
			break;
		printf("%s\n", line);
	}
	free(buffer);
	return (0);
}

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
