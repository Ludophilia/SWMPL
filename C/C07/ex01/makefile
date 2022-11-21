# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 19:28:10 by jgermany          #+#    #+#              #
#    Updated: 2022/11/21 19:28:11 by jgermany         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = a.out
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(EXEC)
$(EXEC): ft_range.o main.o
	$(CC) $(CFLAGS) ft_range.o main.o
ft_range.o: ft_range.c
	$(CC) $(CFLAGS) -c $^
main.o: main.c
	$(CC) $(CFLAGS) -c $^

re: fclean all
fclean: clean
	rm a.out
clean:
	rm ft_range.o main.o