# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcressen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 14:00:14 by mcressen          #+#    #+#              #
#    Updated: 2018/09/06 14:00:17 by mcressen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c

OBJ = ft_cat.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		@gcc $(FLAGS) -c $(SRC)
		@gcc $(OBJ) -o $(NAME)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all
