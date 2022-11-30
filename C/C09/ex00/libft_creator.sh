# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 12:12:41 by jgermany          #+#    #+#              #
#    Updated: 2022/11/30 12:27:43 by jgermany         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

gcc -Wall -Wextra -Werror -c ft*.c
ar -rc libft.a ft*.o
ranlib libft.a
rm ft*.o