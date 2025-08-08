NAME = libftprintf.a

SRC = ft_printf.c \
	ft_putchar.c \
	ft_puthexa.c \
	ft_putnbr_unsigned.c \
	ft_putnbr.c \
	ft_putptr.c \
	ft_putstr.c \
	ft_strlen.c

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re