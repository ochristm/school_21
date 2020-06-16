NAME = colle-2
SOURCES = main.c ft_input.c ft_strlen.c ft_strdup.c ft_string.c \
		ft_list.c ft_strncpy.c ft_check_rush00.c ft_check_rush01.c \
		ft_check_rush02.c ft_check_rush03.c ft_check_rush04.c \
		ft_stdout.c sum_rush.c ft_putnbr.c
HEADERS = ft_rush_2.h ft_list.h ft_string.h ft_check.h ft_output.h
OBJECTS = $(SOURCES:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
	gcc $(OBJECTS) -o $(NAME)

$(OBJECTS): %.o: %.c $(HEADERS)
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
