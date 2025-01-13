# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_printchar.c ft_printhex.c ft_printnbr.c ft_printptr.c ft_printstr.c ft_printunsigned.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a
INCLUDE = printf.h

#Rule to compile the static library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

#Rule to compile the .c files in .o files
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

#Clean the object files generated
clean:
	rm -f $(OBJ)

#Clean the object files and the library
fclean: clean
	rm -f $(NAME)

#+Rule to compile again everything
re: fclean $(NAME)

#Default rule
all: $(NAME)