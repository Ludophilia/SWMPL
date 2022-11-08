/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:43:12 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/07 15:02:08 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i != (size - 1))
			printf("%i, ", tab[i]);
		else
			printf("%i\n", tab[i]);
		i++;
	}
}

int	main(void)
{	
	int	tab1[5] = {1, 3, 5, 7, 9};
	int	tab2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_print_tab(tab1, 5);
	ft_rev_int_tab(tab1, 5);
	ft_print_tab(tab1, 5);
	ft_print_tab(tab2, 10);
	ft_rev_int_tab(tab2, 10);
	ft_print_tab(tab2, 10);
}
