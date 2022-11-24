/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:25:36 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:17:02 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_b16(short c)
{
	char	*base_16;

	base_16 = "0123456789abcdef";
	ft_putchar('\\');
	if (c < 0)
	{
		ft_putchar('-');
		c *= -1;
	}
	ft_putchar(base_16[c / 16]);
	ft_putchar(base_16[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_putchar_b16(str[i]);
		i++;
	}
}
