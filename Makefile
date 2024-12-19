# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c c_putchar.c s_putstr.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a
INCLUDE = printf.h

# Regla para compilar la librería estática
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Regla para compilar los archivos .c en archivos .o
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar los archivos objeto generados
clean:
	rm -f $(OBJ)

# Limpiar los archivos objeto y la librería
fclean: clean
	rm -f $(NAME)

# Regla para volver a compilar todo desde cero
re: fclean $(NAME)

# Regla por defecto
all: $(NAME)