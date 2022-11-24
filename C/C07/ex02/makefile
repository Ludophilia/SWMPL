# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 19:27:58 by jgermany          #+#    #+#              #
#    Updated: 2022/11/24 22:24:21 by jgermany         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = a.out
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(EXEC)
$(EXEC): ft_ultimate_range.o main.o
	$(CC) $(CFLAGS) ft_ultimate_range.o main.o
ft_ultimate_range.o: ft_ultimate_range.c
	$(CC) $(CFLAGS) -c $^
main.o: main.c
	$(CC) $(CFLAGS) -c $^

re: fclean all
fclean: clean
	rm a.out
clean:
	rm ft_ultimate_range.o main.o