# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 19:27:43 by jgermany          #+#    #+#              #
#    Updated: 2022/11/25 12:51:50 by jgermany         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

EXEC = a.out
# SOURCES = $(wildcard *.c) # Those always exists
# SOURCES = $(OBJECTS: .o=.c) # Depend if object exists
SPLIT = ft_split.c #ft_split0.c
SOURCES = $(SPLIT) main.c #Their names, literally

# OBJECTS = $(wildcard *.o) #They may not exist when make is executed (empty)
OBJECTS = $(SOURCES:.c=.o) #But their NAME can be built from anther one
# OBJECTS = $($(wildcard *.c):.c=.o) #Doesn't work.
# OBJECTS = ft_convert_base2.o ft_convert_base.o main.o #Their names, literally

all: $(EXEC)
$(EXEC): $(OBJECTS)
	$(CC) $(CFLAGS) $^
%.o: %.c # A file <name>.o depend on file <name>.c (that make HAVE to FIND)
	$(CC) $(CFLAGS) -c $<

re: fclean all
fclean: clean
	rm $(EXEC)
xclean:
	rm $(EXEC)
clean:
	rm $(OBJECTS)

.PHONY: clean # tells make that clean is the target, not the file name.