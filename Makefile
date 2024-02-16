# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 13:32:53 by jotorral          #+#    #+#              #
#    Updated: 2023/12/07 10:12:59 by alvicina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = push_swap.c message.c check_args.c lists.c index.c utils.c \
	  instructions.c sort_simple.c instructions_bis.c instructions_three.c \
	  sort_radix.c \

OBJ = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror -Ilibft  #-g3 -fsanitize=address

all: lib $(NAME)

$(NAME): $(OBJ) push_swap.h
	$(CC) $(FLAGS) $(OBJ) -Llibft -lft -o $(NAME) 

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

execute:
	./$(NAME)

clean:
	rm -rf $(OBJ)
	$(MAKE) -C libft clean

fclean:	clean
		rm -rf $(NAME)

re: fclean all

lib:
	$(MAKE) -C libft

.PHONY: all execute clean fclean re lib
