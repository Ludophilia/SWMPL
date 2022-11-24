/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:29:01 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:15:47 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(int argc, char **argv)
{
	char	dest1[25];
	char	dest2[25];

	if (argc != 3)
		return (1);
	printf("ft_strncpy('%s', %i) = '%s'\n", argv[1], atoi(argv[2]),
		ft_strncpy(dest1, argv[1], atoi(argv[2])));
	printf("strncpy('%s', %i) = '%s'\n", argv[1], atoi(argv[2]),
		strncpy(dest2, argv[1], atoi(argv[2])));
	return (0);
}
