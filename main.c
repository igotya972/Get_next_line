/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 01:50:25 by dferjul           #+#    #+#             */
/*   Updated: 2023/03/10 16:00:19 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     main(int argc, char **argv)
{
  int   fd;
 (void)argc;
  //if (READ_SIZE == 0)
  //  return (-1);
  fd = open(argv[1], O_RDONLY);
  //printf("%d\n", fd);
  printf("%s\n", get_next_line(fd));
  printf("%s\n", get_next_line(fd));
  printf("%s\n", get_next_line(fd));
  printf("%s\n", get_next_line(fd));
  //while (get_next_line(fd))
    //printf("%s\n", get_next_line(fd));
}