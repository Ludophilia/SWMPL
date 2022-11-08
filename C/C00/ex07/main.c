/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:34:19 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/07 13:35:36 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(INT_MIN);
	ft_putchar('\n');
	ft_putnbr(-420);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(420);
	ft_putchar('\n');
	ft_putnbr(INT_MAX);
}
