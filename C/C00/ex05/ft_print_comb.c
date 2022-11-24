/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:08:18 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:12:08 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_update_cmb(char *cb)
{
	cb[2]++;
	if (cb[2] > '9')
	{
		cb[2] = '0';
		cb[1]++;
	}
	if (cb[1] > '9')
	{
		cb[1] = '0';
		cb[0]++;
	}
}

void	ft_print_comb(void)
{
	char	cb[3];

	cb[0] = '0';
	cb[1] = '0';
	cb[2] = '0';
	while (cb[0] <= '9')
	{
		if (cb[0] < cb[1] && cb[1] < cb[2])
		{
			ft_putchar(cb[0]);
			ft_putchar(cb[1]);
			ft_putchar(cb[2]);
			if (!(cb[0] == '7' && cb[1] == '8' && cb[2] == '9'))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		ft_update_cmb(cb);
	}	
}
