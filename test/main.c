/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:21:16 by rysmith           #+#    #+#             */
/*   Updated: 2020/02/20 14:28:40 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ".././get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	while (get_next_line(fd, &line) == 1)
	{
		printf("It worked");
		free(line);
	}
	if (argc == 2)
		close(fd);
	//sleep(10);
	return (0);
}
