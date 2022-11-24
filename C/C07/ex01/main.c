/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:49:08 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:24:10 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

void	ft_print_range(int *range, int min, int max)
{
	int	i;

	i = 0;
	while (min + i < max)
	{
		if (i == 0)
			printf("R: '");
		if (min + i < max - 1)
			printf("%i ", range[i]);
		else
			printf("%i'", range[i]);
		i++;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	int	*range;

	if (argc != 3)
		return (1);
	range = ft_range(atoi(argv[1]), atoi(argv[2]));
	if (!range)
	{
		printf("Range is null. Terminating...\n");
		return (1);
	}
	printf("min : %i, max : %i\n", atoi(argv[1]), atoi(argv[2]));
	ft_print_range(range, atoi(argv[1]), atoi(argv[2]));
	return (0);
}
