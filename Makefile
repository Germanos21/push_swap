# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 20:39:06 by gchernys          #+#    #+#              #
#    Updated: 2022/11/10 22:45:05 by gchernys         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

AR = ar rcs

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

LIBFT = cd libft && make

FILES = ./push_swap.c				\
		./parsing/parsing.c			\
		./parsing/parsing2.c		\
		./parsing/parsing3.c		\
		./swap_op/p_action.c		\
		./swap_op/r_action.c		\
		./swap_op/rr_action.c		\
		./swap_op/s_action.c		\
		./utils/stack_utils.c		\
		./utils/stack_utils2.c		\
		./utils/stack_utils3.c		\
		./sorts/sorting.c			\
		./sorts/mini_sort.c			\
		./sorts/big_sort.c			\
		./parsing/ps_atoi.c
		
FILES_O = $(FILES:.c=.o)

LIBFT_PATH = ./libft/

LIBFT = $(LIBFT_PATH)libft.a

all: $(NAME)

$(NAME) :	$(LIBFT) $(FILES_O)
	      	$(CC) $(CFLAGS) $(FILES_O) $(LIBFT) -o push_swap

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_PATH)

clean:
	cd libft && make clean
	rm -rf *.o
	cd parsing && rm -rf *.o
	cd swap_op && rm -rf *.o
	cd sorts && rm -rf *.o
	cd utils && rm -rf *.o

fclean: clean
	$(RM) $(NAME)
	cd libft && make fclean

re: fclean all

.PHONY:	all clean fclean re