# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 20:39:06 by gchernys          #+#    #+#              #
#    Updated: 2022/07/14 22:50:15 by gchernys         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

AR = ar rcs

LIBFT = cd libft && make

SRC =	./push_swap.c	\
		./action1.c		\
		./action2.c		\
		./action3.c		\
		./error_check.c	