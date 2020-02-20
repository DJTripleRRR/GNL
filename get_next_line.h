/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:58:04 by rysmith           #+#    #+#             */
/*   Updated: 2020/02/20 14:02:48 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 16
# define MAX_FD 1024

# include "libft/libft.h"
# include <fcntl.h>

int	get_next_line(int fd, char **line);

#endif
