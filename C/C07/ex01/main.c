/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:49:08 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/18 22:15:12 by jgermany         ###   ########.fr       */
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
			printf("R : ");
		if (min + i < max - 1)
			printf("%i ", range[i]);
		else
			printf("%i", range[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("min : %i, max : %i\n", atoi(argv[1]), atoi(argv[2]));
	ft_print_range(
		ft_range(atoi(argv[1]), atoi(argv[2])),
		atoi(argv[1]), atoi(argv[2]));
	return (1);
}
