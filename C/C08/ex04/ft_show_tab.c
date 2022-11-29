/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:22:42 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/29 14:37:50 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10 || nb <= -10)
		ft_putnbr(nb / 10);
	if (nb < 0 && nb > -10)
		write(1, "-", 1);
    if (nb < 0)
        nb = '0' + -(nb % 10);
    else
        nb = '0' + (nb % 10);
	write(1, &nb, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	par--;
	while ((++par)->str)
	{
		
	}
}