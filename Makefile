NAME = fractol
CC = gcc
CFLAGS = -Wall -Werror -Wextra

MLX_DIR = ./minilibx-linux
MLX_MAC_DIR = ./minilibx_opengl
MLX_LIB = -L $(MLX_PATH) -lmlx


LIBFT_DIR = libft
LIBFT_MAKE = make -C $(LIBFT_DIR)
LIBFT_PREF = -L./libft -lft

SRCS = main.c
OBJ = $(SRCS:.c=.o)

mac:
	$(CC) -L $(MLX_MAC_DIR) $(MLX_MAC_DIR)/libmlx.a $(MLX_MAC_DIR)/mlx.h src/main.c -framework OpenGL -framework AppKit && ./a.out

all: ${NAME}

%.o: %.c
	$(CC) $(CFLAGS)

$(MLX_DIR):
	git clone https://github.com/42Paris/minilibx-linux.git $(MLX_PATH)
	make -C $(MLX_DIR)
