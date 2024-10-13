# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
NAME = libft.a
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

# Objetivo : Prerequisitos
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
	$(RM) $(OBJS) *.o

# Limpiar todo, incluyendo la librería
fclean: clean
	$(RM) $(NAME)

# Reconstruir todo
re: fclean all

# Regla para compilar y probar
test: all
	$(CC) $(CFLAGS) ft_strlcpy.c -L. -lft -o test_program
	./test_program

# Asegurar que los objetivos no entren en conflicto con archivos del mismo nombre
.PHONY: all clean fclean re test
