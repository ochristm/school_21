# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ochristm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 21:27:35 by ochristm          #+#    #+#              #
#    Updated: 2019/09/15 10:48:48 by ochristm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
	  ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c \
	   ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		 ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
			ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c\
				ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
					ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
					   ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c
OBJECTS = $(SRC:.c=.o)
HEADERS = ./
FLAGS = -Wall -Werror -Wextra

all: $(NAME)
	
$(NAME): $(OBJECTS)
	gcc $(FLAGS) -I $(HEADERS) -c $(SRC)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

ft_memset.o: ft_memset.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_memset.c

ft_bzero.o: ft_bzero.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_bzero.c

ft_memcpy.o: ft_memcpy.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_memcpy.c

ft_memccpy.o: ft_memccpy.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_memccpy.c

ft_memmove.o: ft_memmove.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_memmove.c

ft_memchr.o: ft_memchr.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_memchr.c

ft_memcmp.o: ft_memcmp.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_memcmp.c

ft_strlen.o: ft_strlen.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strlen.c

ft_strdup.o: ft_strdup.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strdup.c

ft_strcpy.o: ft_strcpy.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strcpy.c

ft_strncpy.o: ft_strncpy.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strncpy.c

ft_strcat.o: ft_strcat.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strcat.c

ft_strncat.o: ft_strncat.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strncat.c

ft_strlcat.o: ft_strlcat.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strlcat.c

ft_strchr.o: ft_strchr.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strchr.c

ft_strrchr.o: ft_strrchr.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strrchr.c

ft_strstr.o: ft_strstr.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strstr.c

ft_strnstr.o: ft_strnstr.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strnstr.c

ft_strcmp.o: ft_strcmp.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strcmp.c

ft_strncmp.o: ft_strncmp.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strncmp.c

ft_atoi.o: ft_atoi.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_atoi.c

ft_isalpha.o: ft_isalpha.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_isalpha.c

ft_isdigit.o: ft_isdigit.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_isdigit.c

ft_isalnum.o: ft_isalnum.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_isalnum.c

ft_isascii.o: ft_isascii.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_isascii.c

ft_isprint.o: ft_isprint.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_isprint.c

ft_toupper.o: ft_toupper.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_toupper.c

ft_tolower.o: ft_tolower.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_tolower.c

ft_memalloc.o: ft_memalloc.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_memalloc.c

ft_memdel.o: ft_memdel.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_memdel.c

ft_strnew.o: ft_strnew.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strnew.c

ft_strdel.o: ft_strdel.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strdel.c

ft_strclr.o: ft_strclr.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strclr.c

ft_striter.o: ft_striter.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_striter.c

ft_striteri.o: ft_striteri.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_striteri.c

ft_strmap.o: ft_strmap.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strmap.c

ft_strmapi.o: ft_strmapi.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strmapi.c

ft_strequ.o: ft_strequ.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strequ.c

ft_strnequ.o: ft_strnequ.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strnequ.c

ft_strsub.o: ft_strsub.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strsub.c

ft_strjoin.o: ft_strjoin.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strjoin.c

ft_strtrim.o: ft_strtrim.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strtrim.c

ft_strsplit.o: ft_strsplit.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_strsplit.c

ft_itoa.o: ft_itoa.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_itoa.c

ft_putchar.o: ft_putchar.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_putchar.c

ft_putstr.o: ft_putstr.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_putstr.c

ft_putendl.o: ft_putendl.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_putendl.c

ft_putnbr.o: ft_putnbr.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_putnbr.c

ft_putchar_fd.o: ft_putchar_fd.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_putchar_fd.c

ft_putstr_fd.o: ft_putstr_fd.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_putstr_fd.c

ft_putendl_fd.o: ft_putendl_fd.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_putendl_fd.c
#
ft_putnbr_fd.o: ft_putnbr_fd.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_putnbr_fd.c
	
ft_lstnew.o: ft_lstnew.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_lstnew.c

ft_lstdelone.o: ft_lstdelone.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_lstdelone.c

ft_lstdel.o: ft_lstdel.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_lstdelone.c

ft_lstadd.o: ft_lstadd.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_lstadd.c

ft_lstiter.o: ft_lstiter.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_lstiter.c

ft_lstmap.o: ft_lstmap.c
	gcc $(FLAGS) -I $(HEADERS) -c ft_lstmap.c

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
