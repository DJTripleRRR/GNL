# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rysmith <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 14:13:11 by rysmith           #+#    #+#              #
#    Updated: 2020/02/20 14:14:07 by rysmith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl

SRC = main.c ../get_next_line.c

INCL = ../get_next_line.h

all: $(NAME)

$(NAME):
	make -C .././libft
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC) .././libft/libft.a

clean:
	make clean -C .././libft

fclean: clean
	make fclean -C .././libft
	rm -f $(NAME)

re: fclean all
