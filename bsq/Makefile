# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marthur- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 20:21:45 by marthur-          #+#    #+#              #
#    Updated: 2018/09/11 20:21:46 by marthur-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wextra -Wall -Werror

NAME = bsq

SRC = src/bsq.c src/main.c src/help_funcs.c src/checks.c src/parse.c

OBJ = bsq.o main.o help_funcs.o checks.o parse.o

all: $(NAME)

$(NAME): 
		@gcc $(FLAGS) -c $(SRC)
		@gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all
