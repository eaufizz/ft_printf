NAME = libftprintf.a 

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

LSRCS = \
		libft/ft_isalpha.c\
		libft/ft_isdigit.c\
		libft/ft_isalnum.c\
		libft/ft_isascii.c\
		libft/ft_isprint.c\
		libft/ft_strlen.c\
		libft/ft_memset.c\
		libft/ft_bzero.c\
		libft/ft_memcpy.c\
		libft/ft_memmove.c\
		libft/ft_strlcpy.c\
		libft/ft_strlcat.c\
		libft/ft_toupper.c\
		libft/ft_tolower.c\
		libft/ft_strchr.c\
		libft/ft_strrchr.c\
		libft/ft_strncmp.c\
		libft/ft_memchr.c\
		libft/ft_memcmp.c\
		libft/ft_strnstr.c\
		libft/ft_atoi.c\
		libft/ft_calloc.c\
		libft/ft_strdup.c\
		libft/ft_substr.c\
		libft/ft_strjoin.c\
		libft/ft_strtrim.c\
		libft/ft_split.c\
		libft/ft_itoa.c\
		libft/ft_strmapi.c\
		libft/ft_striteri.c\
		libft/ft_putchar_fd.c\
		libft/ft_putstr_fd.c\
		libft/ft_putendl_fd.c\
		libft/ft_putnbr_fd.c

LOBJS = $(LSRCS:.c=.o)

LOBJ = \
		ft_isalpha.o\
		ft_isdigit.o\
		ft_isalnum.o\
		ft_isascii.o\
		ft_isprint.o\
		ft_strlen.o\
		ft_memset.o\
		ft_bzero.o\
		ft_memcpy.o\
		ft_memmove.o\
		ft_strlcpy.o\
		ft_strlcat.o\
		ft_toupper.o\
		ft_tolower.o\
		ft_strchr.o\
		ft_strrchr.o\
		ft_strncmp.o\
		ft_memchr.o\
		ft_memcmp.o\
		ft_strnstr.o\
		ft_atoi.o\
		ft_calloc.o\
		ft_strdup.o\
		ft_substr.o\
		ft_strjoin.o\
		ft_strtrim.o\
		ft_split.o\
		ft_itoa.o\
		ft_strmapi.o\
		ft_striteri.o\
		ft_putchar_fd.o\
		ft_putstr_fd.o\
		ft_putendl_fd.o\
		ft_putnbr_fd.o

CC = cc -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJS) $(LOBJS)
	ar rcs $(NAME) $(OBJS) $(LOBJS)
$(OBJS): $(SRCS) $(LSRCS)
	$(CC) -c $(SRCS) $(LSRCS)

clean:
	rm -f $(OBJS)
	rm -f $(LOBJS)
	rm -f $(LOBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY:all clean fclean re