NAME = libft.a
SRC = ft_strlen.c ft_putchar_fd.c ft_putstr_fd.c \

CC = gcc
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs


all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all