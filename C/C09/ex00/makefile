# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 19:27:43 by jgermany          #+#    #+#              #
#    Updated: 2022/11/30 12:41:33 by jgermany         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SOURCES = main.c
OBJECTS = $(SOURCES:.c=.o)
LIB = libft.a

CC = gcc
CCFL = -Wall -Wextra -Werror
OBFL = -c

SH = sh

LDIR = .
LFL = -l
LDIRFL = -L

all: $(NAME)
$(NAME): $(OBJECTS) $(LIB) #$< position is CRI-TI-CAL!!
	$(CC) $(CCFL) $< $(LDIRFL)$(LDIR) $(LFL)$(LIB:lib%.a=%)
%.o: %.c
	$(CC) $(CCFL) $(OBFL) $<
$(LIB):
	$(SH) $(LIB:%.a=%)_creator.sh

re: fclean all
fclean: clean
	rm $(NAME) $(LIB)
xclean:
	rm $(NAME) $(LIB)
clean:
	rm $(OBJECTS)

.PHONY: clean
