NAME = libftprintf.a
SRCS =	ft_printf.c \
		printf_putchar.c \
		printf_putnbr.c \
		printf_putstr.c \
		printf_putvoid.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT = libft/libft.a
INCLUDES = -Ilibft

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) $(LIBFT)

clean:
	rm -f $(OBJS)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

.PHONY: all clean fclean re