/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 03:25:15 by dferjul           #+#    #+#             */
/*   Updated: 2023/03/01 20:56:45 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdarg.h>

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#ifndef	BUFF_SIZE
# define BUFF_SIZE 1
#endif

char	*get_next_line(int fd);
void	read_and_stash(int fd, size_t count);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strcat(char *dst, const char *src);

#endif