# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcressen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/08 23:09:09 by mcressen          #+#    #+#              #
#    Updated: 2018/09/08 23:12:03 by mcressen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = main.c stack.c ft_string_oper.c ft_convert.c evalexpr.c ft_oper.c

OBJ = main.o stack.o ft_string_oper.o ft_convert.o evalexpr.o ft_oper.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(SRC)
		gcc $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
