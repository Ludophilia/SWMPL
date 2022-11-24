/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:33:39 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:18:07 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

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
	printf("ft_strncat('%s', '%s', %i) : '%s'\n",
		dest1, argv[2], atoi(argv[3]),
		ft_strncat(dest1, argv[2], atoi(argv[3])));
	printf("strncat('%s', '%s', %i) : '%s'\n",
		dest2, argv[2], atoi(argv[3]),
		ft_strncat(dest2, argv[2], atoi(argv[3])));
}
