/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 01:50:25 by dferjul           #+#    #+#             */
/*   Updated: 2023/03/01 20:32:18 by dferjul          ###   ########.fr       */
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

int main(int argc, char **argv)
{
    int fd;
    char *line;

    if (argc != 2)
    {
        printf("Usage: ./gnl [fichier.txt]\n");
        return (1);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        printf("Error: Could not open file %s\n", argv[1]);
        return (1);
    }

    while (get_next_line(fd) && line)
    {
        printf("%s\n", line);
        free(line);
    }

    close(fd);
    return (0);
}
