/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:29:01 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/08 11:21:50 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(int argc, char **argv)
{
	char	dest1[50];
	char	dest2[50];

	if (argc != 3)
		return (1);
	printf("ft_strlcpy('%s', %i) = %u\n", argv[1], atoi(argv[2]),
		ft_strlcpy(dest1, argv[1], atoi(argv[2])));
	printf("dest1 : '%s'\n", dest1);
	printf("strlcpy('%s', %i) = %lu\n", argv[1], atoi(argv[2]),
		strlcpy(dest2, argv[1], atoi(argv[2])));
	printf("dest2 : '%s'\n", dest2);
	return (0);
}
