# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJS = $(SRCS:.c=.o)
INCLUDE = -I .

# Objetivo : Prerequisitos
# Regla principal para compilar la librería
all: $(NAME)

# Compilar la librería estática
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Regla para compilar archivos .o
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

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
