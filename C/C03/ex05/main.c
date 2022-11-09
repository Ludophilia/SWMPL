/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:33:39 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/09 20:55:23 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(int argc, char **argv)
{
	char	dest1[100];
	char	dest2[100];
	int		i;

	if (argc != 4)
		return (1);
	i = 0;
	while (argv[1][i])
	{
		dest1[i] = argv[1][i];
		dest2[i] = argv[1][i];
		i++;
	}
	printf("ft_strlcat('%s', '%s', %u) : %u\n", dest1, argv[2], atoi(argv[3]),
		ft_strlcat(dest1, argv[2], atoi(argv[3])));
	printf("dest1 -> '%s'\n", dest1);
	printf("strlcat('%s', '%s', %u) : %lu\n", dest2, argv[2], atoi(argv[3]),
		strlcat(dest2, argv[2], atoi(argv[3])));
	printf("dest2 -> '%s'\n", dest2);
}
