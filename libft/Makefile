# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
NAME = libft.a
SRCS = ft_strlen.c  # Lista de archivos .c
OBJS = $(SRCS:.c=.o)             # Convierte archivos .c a .o automáticamente

# Regla principal para compilar la librería
all: $(NAME)

# Compilar la librería estática
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Regla para compilar archivos .o
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar archivos .o
clean:
	rm -f $(OBJS)

# Limpiar todo, incluyendo la librería
fclean: clean
	rm -f $(NAME)

# Reconstruir todo
re: fclean all

# Regla para compilar y probar
test: all
	$(CC) $(CFLAGS) ft_strlcpy.c -L. -llibft -o test_program
	./test_program
