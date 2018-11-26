# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 08:30:33 by clfoltra          #+#    #+#              #
#    Updated: 2018/11/06 08:30:38 by clfoltra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libft.a

INCLUDE = ./includes/

PATH = ./srcs/

SRC = $(PATH)ft_putstr.c $(PATH)ft_putchar.c $(PATH)ft_strcmp.c \
	  $(PATH)ft_strlen.c $(PATH)ft_swap.c

OBJ = 	ft_putstr.o ft_putchar.o ft_strcmp.o ft_strlen.o ft_swap.o
all: $(NAME)
$(NAME):
	gcc -c -I $(INCLUDE) -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
