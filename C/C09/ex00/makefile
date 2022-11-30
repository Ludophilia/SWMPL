# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 19:27:43 by jgermany          #+#    #+#              #
#    Updated: 2022/11/30 14:38:01 by jgermany         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SOURCES = main.c
OBJECTS = $(SOURCES:.c=.o)
LIB = libft.a
LDIR = .

CC = gcc
CCFL = -Wall -Wextra -Werror
OBFL = -c
LFL = -l
LDIRFL = -L

SH = sh

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
