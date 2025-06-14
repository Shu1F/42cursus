###################################################################
#                               ft_printf                               #
#       builds libftprintf.a ― libft の必須関数も一緒に梱包       #
###################################################################

NAME        = libftprintf.a

SRC_DIR     = src
LIBFT_DIR   = libft

# ── ft_printf ソース ───────────────────────────────
SRCS_PRINTF = \
    $(SRC_DIR)/ft_printf.c \
    $(SRC_DIR)/ft_put_char.c \
    $(SRC_DIR)/ft_put_hexadecimal.c \
    $(SRC_DIR)/ft_put_nbr.c \
    $(SRC_DIR)/ft_put_percent.c \
    $(SRC_DIR)/ft_put_pointer.c \
    $(SRC_DIR)/ft_put_str.c \
    $(SRC_DIR)/ft_put_unsigned.c

# ── libft から取り込む関数 ─────────────────────────
SRCS_LIBFT = \
    $(LIBFT_DIR)/ft_putchar_fd.c \
    $(LIBFT_DIR)/ft_putstr_fd.c \
    $(LIBFT_DIR)/ft_strlen.c

# 全ソース
SRCS = $(SRCS_PRINTF) $(SRCS_LIBFT)
OBJS = $(SRCS:.c=.o)

# コンパイル設定
CC          = gcc
CFLAGS      = -Wall -Wextra -Werror -Iinclude -I$(LIBFT_DIR)
AR          = ar rcs
RM          = rm -f

# ── Rules ─────────────────────────────────────────
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re