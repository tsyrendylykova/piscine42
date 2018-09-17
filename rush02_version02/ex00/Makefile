# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drdraugr <variya1@yandex.ru>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/08 14:19:41 by drdraugr          #+#    #+#              #
#    Updated: 2018/09/08 18:35:59 by drdraugr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_0=colle-00
NAME_1=colle-01
NAME_2=colle-02
NAME_3=colle-03
NAME_4=colle-04
NAME=colle-2

SRC=srcs/ft_putstr.c srcs/ft_puterror.c \
	srcs/ft_atoi.c srcs/ft_putchar.c \
	srcs/ft_listcmp.c	

SRC_L=srcs/ft_list_push_back.c srcs/ft_create_elem.c
INC_DIR=includes

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror $(SRC) $(SRC_L) srcs/rush_2.c -I$(INC_DIR) -o $(NAME)

rush:
	@gcc -Wall -Wextra -Werror $(SRC) srcs/rush00.c -I$(INC_DIR) -o $(NAME_0)
	@gcc -Wall -Wextra -Werror $(SRC) srcs/rush01.c -I$(INC_DIR) -o $(NAME_1)
	@gcc -Wall -Wextra -Werror $(SRC) srcs/rush02.c -I$(INC_DIR) -o $(NAME_2)
	@gcc -Wall -Wextra -Werror $(SRC) srcs/rush03.c -I$(INC_DIR) -o $(NAME_3)
	@gcc -Wall -Wextra -Werror $(SRC) srcs/rush04.c -I$(INC_DIR) -o $(NAME_4)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

rush_clean: clean
	@rm -f $(NAME_0) $(NAME_1) $(NAME_2) $(NAME_3) $(NAME_4)

re: fclean all
