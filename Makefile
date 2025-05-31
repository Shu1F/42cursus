###################################################################
#                             ft_printf                           #
#   Minimal Makefile — builds libftprintf.a and depends on libft  #
###################################################################

# -----------------------------------------------------------------
# Config
# -----------------------------------------------------------------
NAME        := libftprintf.a

SRC_DIR     := src
SRC         := $(SRC_DIR)/ft_printf.c \
               $(SRC_DIR)/ft_put_char.c \
               $(SRC_DIR)/ft_put_hexadecimal.c \
               $(SRC_DIR)/ft_put_nbr.c \
               $(SRC_DIR)/ft_put_percent.c \
               $(SRC_DIR)/ft_put_pointer.c \
               $(SRC_DIR)/ft_put_str.c \
               $(SRC_DIR)/ft_put_unsigned.c

OBJ         := $(SRC:.c=.o)

# libft (sub‑module)
LIBFT_DIR   := libft
LIBFT       := $(LIBFT_DIR)/libft.a

# Compiler / flags
CC          := gcc
CFLAGS      := -Wall -Wextra -Werror -Iinclude -I$(LIBFT_DIR)
AR          := ar rcs
RM          := rm -f

# -----------------------------------------------------------------
# Rules
# -----------------------------------------------------------------
all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(AR) $@ $(OBJ)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
