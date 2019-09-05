# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ochristm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 21:27:35 by ochristm          #+#    #+#              #
#    Updated: 2019/09/05 21:38:13 by ochristm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = display_file
SRC = srcs/*.c
FLAGS = -Wall -Werror -Wextra

all: $(NAME)
	
$(NAME):
	gcc $(FLAGS) -c $(SRC) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
