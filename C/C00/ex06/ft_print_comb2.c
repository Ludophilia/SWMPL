/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:43:04 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/07 13:23:28 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_update_cmbs(char *cb)
{
	cb[3]++;
	if (cb[3] > '9')
	{
		cb[3] = '0';
		cb[2]++;
	}
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

void	ft_print_comb2(void)
{
	char	cb[4];

	cb[0] = '0';
	cb[1] = '0';
	cb[2] = '0';
	cb[3] = '0';
	while (cb[0] <= '9')
	{
		if ((10 * (cb[0] - '0') + (cb[1] - '0')) \
			< (10 * (cb[2] - '0') + (cb[3] - '0')))
		{
			ft_putchar(cb[0]);
			ft_putchar(cb[1]);
			ft_putchar(' ');
			ft_putchar(cb[2]);
			ft_putchar(cb[3]);
			if (!(cb[0] == '9' && cb[1] == '8'))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		ft_update_cmbs(cb);
	}	
}
