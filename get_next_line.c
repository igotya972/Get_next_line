/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 02:39:19 by dferjul           #+#    #+#             */
/*   Updated: 2023/03/04 16:17:43 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			ret;
	static char	buf[BUFFER_SIZE + 1];
	char		*tmp;
	char		*line;

	line = malloc(sizeof(char *));
	line[0] = '\0';
	ret = read(fd, buf, BUFFER_SIZE);
	while (ret == read(fd, buf, BUFFER_SIZE))
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
