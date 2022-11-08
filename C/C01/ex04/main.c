/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:51:40 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/07 14:52:14 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	b_a;
	int	*a;
	int	b_b;
	int	*b;

	a = &b_a;
	b = &b_b;
	b_a = 42;
	b_b = 10;
	ft_ultimate_div_mod(a, b);
	printf("42 / 10 = %i, 42 %% 10 = %i\n", *a, *b);
}
