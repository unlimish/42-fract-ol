NAME = fractol
CC = gcc
CFLAGS = -Wall -Werror -Wextra

LIBFT_DIR = libft
LIBFT_MAKE = make -C $(LIBFT_DIR)
LIBFT_PREF = -L./libft -lft

SRCS = main.c

all: ${NAME}
