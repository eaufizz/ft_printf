NAME = libftprintf.a 

SRCS = \
		ft_printf.c 

CC = cc -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(SRCS:.c=.o)
	ar rcs $(SRCS:.c=.o)
$(SRCS:.c=.o): $(SRCS)
	$(CC) -c $(SRCS)
clean:
	rm -f $(SRCS:.c=.o)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY:all clean fclean re