/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 03:52:59 by dferjul           #+#    #+#             */
/*   Updated: 2023/03/01 20:21:41 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strcat(char *dst, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
char *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return ((char *)s);
        }
        s++;
    }
    if (*s == c)
    {
        return ((char *)s);
    }
    return (NULL);
}
char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	i;
	size_t	len;

	len = 0;
	while (s1[len])
		len++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}