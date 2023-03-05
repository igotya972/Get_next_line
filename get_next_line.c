/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 02:39:19 by dferjul           #+#    #+#             */
/*   Updated: 2023/03/05 04:45:43 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_line(int fd, char *buf)
{
	char	*line;
	char	*tmp;
	int		ret;

	line = ft_strdup("");
	if (!line)
		return (NULL);
	
	if (fd < 0)
		return (NULL);

	while (1)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret <= 0)
			break ;

		buf[ret] = '\0';
		tmp = ft_strjoin(line, buf);
		free(line);
		line = NULL;
		if (!tmp)
		{
			free(line);
			line = NULL;
			return (NULL);
		}
		
		line = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < 0 && line)
	{
		free(line);
		line = NULL;
		return (NULL);
	}
	return (line);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	buf[BUFFER_SIZE + 1];
	char		*tmp;

	line = read_line(fd, buf);
	if (!line || *line == '\0')
	{
		free(line);
		line = NULL;
		return (NULL);
	}
	
	tmp = ft_strchr(line, '\n');
	if (tmp)
	{
		*tmp = '\0';
		tmp = ft_strdup(line);
		free(line);
		line = NULL;
		line = tmp;
	}
	return (line);
}
