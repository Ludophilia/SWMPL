# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 13:02:44 by jgermany          #+#    #+#              #
#    Updated: 2022/11/30 13:14:50 by jgermany         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes -c #header>>>
OBFL = -c

ARC = ar
ARCFLAGS = -rcs

SRCS = ./srcs
INCLUDES = ./includes
C_FILES = *.c # WTF?
OBJ_FILES = srcs/*.o #${CFILES: .c=.o}

LDIR = .
LFL = -l
LDIRFL = -L

all: $(NAME)
$(NAME): $(OBJ_FILES)
	$(ARC) $(ARCFLAGS) $@ $^
$(OBJ_FILES):
	cd $(SRCS) && $(CC) $(CFLAGS) $(C_FILES)

re: fclean all
fclean: clean
	rm $(NAME)
clean:
	rm $(OBJ_FILES)
