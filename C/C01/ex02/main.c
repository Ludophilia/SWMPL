/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:38:48 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:13:24 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	b_nbr1;
	int	*p_nbr1;
	int	b_nbr2;
	int	*p_nbr2;

	p_nbr1 = &b_nbr1;
	p_nbr2 = &b_nbr2;
	b_nbr1 = 0;
	b_nbr2 = 42;
	printf("b_nbr1 = %i, b_nbr2 = %i\n", b_nbr1, b_nbr2);
	ft_swap(p_nbr1, p_nbr2);
	printf("b_nbr1 = %i, b_nbr2 = %i\n", b_nbr1, b_nbr2);
}
