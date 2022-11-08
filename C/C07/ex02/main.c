/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:49:08 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/03 18:35:18 by jgermany         ###   ########.fr       */
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
			printf("R : ");
		if (min + i < max - 1)
			printf("%i ", range[0][i]);
		else
			printf("%i", range[0][i]);

		i++;
	}
}

int	main(int argc, char **argv)
{
	int	min;
	int	max;
	int	**range;

	range = (int **)malloc(1 * sizeof(int *));
	if (!range || (argc != 3))
		return (1);
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	printf("ft_ultimate_range -> %i\n", ft_ultimate_range(range, min, max));
	ft_print_range(range, min, max);
	return (1);
}
