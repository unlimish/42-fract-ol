NAME = fractol
CC = gcc
CFLAGS = -Wall -Werror -Wextra
MLX_DIR = ./minilibx-linux
MLX_LIB = -L $(MLX_PATH) -lmlx


LIBFT_DIR = libft
LIBFT_MAKE = make -C $(LIBFT_DIR)
LIBFT_PREF = -L./libft -lft

SRCS = main.c
OBJ = $(SRCS:.c=.o)

all: ${NAME}

%.o: %.c
	$(CC) $(CFLAGS)

$(MLX_DIR):
	git clone https://github.com/42Paris/minilibx-linux.git $(MLX_PATH)
	make -C $(MLX_DIR)
