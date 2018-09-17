# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcressen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 19:36:07 by mcressen          #+#    #+#              #
#    Updated: 2018/09/04 19:36:10 by mcressen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = do_op.c ft_atoi.c ft_putnbr.c operations.c

OBJECTS = do_op.o ft_atoi.o ft_putnbr.o operations.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		@gcc $(FLAGS) -c $(SRC)
		@gcc -o $(NAME) $(OBJECTS)

clean:
		@rm -f $(OBJECTS)

fclean: clean
		@rm -f $(NAME)

re: fclean all
