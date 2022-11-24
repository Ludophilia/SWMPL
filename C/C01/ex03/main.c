/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:45:51 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:13:35 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	b_div;
	int	*div;
	int	b_mod;
	int	*mod;

	div = &b_div;
	mod = &b_mod;
	ft_div_mod(42, 10, div, mod);
	printf("42 / 10 = %i, 42 %% 10 = %i\n", *div, *mod);
}
