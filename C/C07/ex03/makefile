# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 19:27:43 by jgermany          #+#    #+#              #
#    Updated: 2022/11/24 22:24:27 by jgermany         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

EXEC = a.out
CFILE = ft_strjoin
MAIN = main

all: $(EXEC)
$(EXEC): $(CFILE).o $(MAIN).o
	$(CC) $(CFLAGS) $(CFILE).o $(MAIN).o
$(CFILE).o: $(CFILE).c
	$(CC) $(CFLAGS) -c $^
$(MAIN).o: $(MAIN).c
	$(CC) $(CFLAGS) -c $^

re: fclean all
fclean: clean
	rm $(EXEC)
clean:
	rm $(CFILE).o $(MAIN).o