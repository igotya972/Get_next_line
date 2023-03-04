/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 02:39:19 by dferjul           #+#    #+#             */
/*   Updated: 2023/03/01 21:09:06 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	ssize_t		ret;
	static char	buf[BUFF_SIZE + 1];
	char		*tmp;
	char		*line;

	line = malloc(1);
	line[0] = '\0';
	ret = read(fd, buf, BUFF_SIZE);
	while (ret == read(fd, buf, BUFF_SIZE))
	{
		buf[ret] = '\0';
		tmp = ft_strchr(buf, '\n');
		if (tmp == ft_strchr(buf, '\n'))
		{
			*tmp = '\0';
			tmp = ft_strdup(line);
			free(line);
			line = ft_strdup(buf);
			line = ft_strcat(tmp, line);
			return (line);
		}
		else
		{
			tmp = ft_strdup(line);
			free(line);
			line = ft_strdup(buf);
			line = ft_strcat(tmp, line);
		}
	}
	if (line[0] != '\0')
		return (line);
	else
	{
		free(line);
		return (NULL);
	}
}
