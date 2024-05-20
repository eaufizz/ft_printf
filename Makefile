NAME = libftprintf.a 
LIBFT = libft/libft.a
SRCS = \
		ft_printf.c \
		format_processor.c \
		ft_putchr.c \
		ft_putstr.c \
		ft_putptr.c \
		ft_putnbr.c \
		ft_uitoa.c \
		ft_itoh.c

OBJS = $(SRCS:.c=.o)

CC = cc -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT)
$(OBJS): $(SRCS) $(LIBFT)
	$(CC) -c $< -o $@ -Ilibft
$(LIBFT): 
	make -C libft
clean:
	rm -f $(OBJS)
	make clean -C libft
fclean: clean
	rm -f $(NAME)
	make fclean -C libft
re: fclean all
.PHONY:all clean fclean re