# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 11:03:14 by clfoltra          #+#    #+#              #
#    Updated: 2018/11/06 11:06:51 by clfoltra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  ft_display_file

SRC = errors.c ft_display_file.c basics.c

OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc $(OBJ) -o $(NAME)

fclean:
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all
