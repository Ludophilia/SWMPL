/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:20:26 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:19:48 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10 || nb <= -10)
		ft_putnbr(nb / 10);
	if (nb < 0 && nb > -10)
		ft_putchar('-');
	if (nb < 0)
		ft_putchar('0' + -(nb % 10));
	else
		ft_putchar('0' + nb % 10);
}
