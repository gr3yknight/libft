NAME=libft.a

CC= gcc

CFLAGS= -Werror -Wall -Wextra

SRCS=$(wildcard *.c)

OBJS=$(SRCS:.c=.o)
$(NAME):
		$(CC) $(CFLAGS) -c $(SRCS)
		ar -rc $(NAME) $(OBJS)

.PHONY: all clean fclean re

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all