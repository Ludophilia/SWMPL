/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:49:08 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/21 16:29:24 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

void	ft_print_range(int **range, int min, int max)
{
	int	i;
	
	i = 0;
	while (min + i < max)
	{
		if (i == 0)
			printf("R : '");
		if (min + i < max - 1)
			printf("%i ", range[0][i]);
		else
			printf("%i'", range[0][i]);
		i++;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	int	min;
	int	max;
	int	**range;
	int	subrange_size;

	if ((argc != 3))
		return (1);
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	range = (int **)malloc(1 * sizeof(int *));
	if (!range)
	{
		printf("Range is null. Terminating...\n");
		return (1);
	}
	subrange_size = ft_ultimate_range(range, min, max);
	if (subrange_size == -1)
	{
		printf("Subrange is null. Terminating...\n");
		return (1);
	}
	printf("subrange size: %i\n", subrange_size);
	ft_print_range(range, min, max);
	return (0);
}
