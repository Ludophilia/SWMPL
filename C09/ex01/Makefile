NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes -c
ARC = ar
ARCFLAGS = -rcs

SRCS = ./srcs
INCLUDES = ./includes
C_FILES = *.c # WTF?
OBJ_FILES = srcs/*.o #${CFILES: .c=.o}

all: $(NAME)
libft.a: $(OBJ_FILES)
	$(ARC) $(ARCFLAGS) $@ $^
$(OBJ_FILES):
	cd $(SRCS) && $(CC) $(CFLAGS) $(C_FILES)
re: fclean all
fclean: clean
	rm $(NAME)
clean:
	rm $(OBJ_FILES)
