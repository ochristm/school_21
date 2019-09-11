# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ochristm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 21:27:35 by ochristm          #+#    #+#              #
#    Updated: 2019/09/11 20:29:51 by ochristm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
OBJECTS = *.o
HEADERS = *.h
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
