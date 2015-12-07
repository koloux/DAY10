# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/04 15:47:49 by nhuber            #+#    #+#              #
#    Updated: 2015/11/05 22:21:32 by nhuber           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
FLAG = -Wall -Wextra -Werror
FILES =	ft_putchar.c ft_putnbr.c ft_atoi.c \
	  	ft_operate.c ft_choice.c do_op.c ft_putstr.c
OBJ = ft_putchar.o ft_putnbr.o ft_atoi.o \
	  ft_operate.o ft_choice.o do_op.o ft_putstr.o

ALL: $(NAME)

$(NAME):
	gcc $(FLAG) -o $(NAME) $(FILES)

clean:
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean ALL
