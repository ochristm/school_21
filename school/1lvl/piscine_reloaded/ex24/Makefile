# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ochristm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/17 10:29:38 by ochristm          #+#    #+#              #
#    Updated: 2019/06/17 20:33:41 by ochristm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
		srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = includes/
FLAGS = -Wall -Werror -Wextra

all: $(NAME)
	
$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(HEADERS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
