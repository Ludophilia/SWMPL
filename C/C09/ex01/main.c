/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:14:13 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/30 13:17:06 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(void)
{
	int	a;
	int	b;

	ft_putchar('Y');
	ft_putchar('o');
	ft_putchar('!');
	ft_putstr("\nSalut a tous!!\n");
	printf("ft_strcmp('%s', '%s') -> %i\n", "abba", "abbo",
		ft_strcmp("abba", "abbo"));
	printf("ft_strcmp('%s', '%s') -> %i\n", "abbo", "abba",
		ft_strcmp("abbo", "abba"));
	printf("ft_strlen('%s') -> %i\n", "boa", ft_strlen("boa"));
	a = 0;
	b = 42;
	printf("a = %i, b = %i\n", a, b);
	ft_swap(&a, &b);
	printf("a = %i, b = %i\n", a, b);
}
