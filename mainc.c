/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 01:50:25 by dferjul           #+#    #+#             */
/*   Updated: 2023/03/05 04:11:42 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*
int main(void)
{
    int fd = open("fichier.txt", O_RDONLY);
    if (fd == -1)
        return 1;

    char *line;
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }

    close(fd);
    return 0;
} 
*/
int main(void)
{
    int fd;
    char *line;

    fd = open("fichier.txt", O_RDONLY);
    if (fd == -1)
    {
        printf("Erreur lors de l'ouverture du fichier\n");
        return (1);
    }

    while (get_next_line(fd) != NULL)
    {
        printf("%s\n", line);
        free(line);
    }

    close(fd);
    return (0);
}
