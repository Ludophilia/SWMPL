/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:43:12 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:15:17 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	ft_fill_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	n = 99;
	srand(time(NULL));
	while (i < size)
	{	
		tab[i] = rand() % n;
		i++;
	}
}

void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	printf("tab[%i] - ", size);
	while (i < size)
	{
		if (i != (size - 1))
			printf("%i, ", tab[i]);
		else
			printf("%i\n", tab[i]);
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{	
	int	size = 15;
	int	tab[size];

	ft_fill_tab(tab, size);
	ft_print_tab(tab, size);
	ft_sort_int_tab(tab, size);
	ft_print_tab(tab, size);
	return (0);
}
