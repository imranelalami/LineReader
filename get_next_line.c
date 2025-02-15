/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 01:24:03 by iel-alam          #+#    #+#             */
/*   Updated: 2025/02/14 22:03:05 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *str)
{
	char		*buff;
	int			red;

	buff = malloc((size_t)BUFFER_SIZE + 1);
	if (!buff)
		return (free(buff), NULL);
	red = 1;
	while (red != 0)
	{
		red = read (fd, buff, BUFFER_SIZE);
		if (red == -1)
		{
			free(buff);
			free(str);
			return (NULL);
		}
		buff[red] = '\0';
		str = ft_strjoin(str, buff);
	}
	free(buff);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*ptr;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	str = read_file(fd, str);
	ptr = ft_get_line(str);
	str = ft_remove(str);
	return (ptr);
}
