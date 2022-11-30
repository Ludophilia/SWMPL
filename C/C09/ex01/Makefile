# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 13:02:44 by jgermany          #+#    #+#              #
#    Updated: 2022/11/30 18:17:53 by jgermany         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CCFL = -Wall -Wextra -Werror
OBFL = -c
OUTFL = -o
INCFL = -I

AR = ar
ARFL = -rcs

SRCS = ./srcs
INCLUDES = ./includes
CFILES = $(wildcard $(SRCS)/ft*.c) # *.c does something somehow... WTF?
OBFILES = $(CFILES:.c=.o)

all: $(NAME)
$(NAME): $(OBFILES)
	$(AR) $(ARFL) $@ $^
%.o: %.c
	$(CC) $(CCFL) $(INCFL)$(INCLUDES) $(OBFL) $< $(OUTFL) $@

re: fclean all
fclean: clean
	rm $(NAME)
xclean:
	rm $(NAME)
clean:
	rm $(OBFILES)

.PHONY: clean
