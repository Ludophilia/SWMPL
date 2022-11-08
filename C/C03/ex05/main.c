/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:33:39 by jgermany          #+#    #+#             */
/*   Updated: 2022/09/29 14:06:45 by jgermany         ###   ########.fr       */
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
	int	i;

	if (argc != 4)
		return (1);
	i = 0;
	while (argv[1][i])
	{
		dest1[i] = argv[1][i];
		dest2[i] = argv[1][i];
		i++;
	}
	printf("[DEBUG STARTS] dest1 = %s | dest2 = %s | src = %s | size = %i\n\n", dest1, dest2, argv[2], atoi(argv[3]));
	printf("ft_strlcat (dest1) : %u\n", ft_strlcat(dest1, argv[2], atoi(argv[3])));
	printf("strlcat (dest2) : %lu\n\n", strlcat(dest2, argv[2], atoi(argv[3])));
	printf("[DEBUG ENDS] dest1 = %s | dest2 = %s | src = %s | size = %i\n", dest1, dest2, argv[2], atoi(argv[3]));
}
