# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/03 14:24:19 by nhuber            #+#    #+#              #
#*   Updated: 2015/12/07 08:05:10 by nhuber           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADER = ./includes/
SRC = ./srcs/
OPTION = -I $(HEADER)
FILES = $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c \
		$(SRC)ft_strlen.c $(SRC)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

ALL : $(NAME)

$(NAME) :
	gcc -c $(FLAG) $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean ALL
