/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:33:39 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:17:40 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("ft_strncmp(\"%s\", \"%s\", %i) = %i\n", argv[1], argv[2],
		atoi(argv[3]), ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("strncmp(\"%s\", \"%s\", %i) = %i\n", argv[1], argv[2],
		atoi(argv[3]), strncmp(argv[1], argv[2], atoi(argv[3])));
}
