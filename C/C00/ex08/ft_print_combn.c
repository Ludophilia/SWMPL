/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:14:22 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:11:59 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_init_combn(char *cb, int n)
{
	int	i;

	if (n < 1 || n > 9)
		return (0);
	i = 0;
	while (i < n)
	{
		cb[i] = ('0' + i);
		i++;
	}
	cb[i] = '\0';
	return (1);
}

int	ft_check_combn(char *cb, int n, int for_gold)
{
	int	i;

	i = 0;
	if (for_gold)
	{
		while (n)
		{
			if (!(cb[n - 1] == ((9 - i) + '0')))
				return (0);
			i++;
			n--;
		}
	}
	else
	{
		while (i + 1 < n)
		{
			if (!(cb[i] < cb[i + 1]))
				return (0);
			i++;
		}
	}
	return (1);
}

void	ft_update_combn(char *cb, int n)
{
	int	i;

	i = 0;
	cb[n - 1]++;
	while (n - 1)
	{	
		if (cb[n - 1] > ('9' - i))
		{
			cb[n - 1] = '0';
			cb[n - 2]++;
		}
		n--;
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	cb[10];
	int		i;

	if (!ft_init_combn(cb, n))
		return ;
	while (cb[0] <= ('9' - (n - 1)))
	{
		if (ft_check_combn(cb, n, 0))
		{
			i = 0;
			while (cb[i])
			{
				ft_putchar(cb[i]);
				i++;
			}
			if (!ft_check_combn(cb, n, 1))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		ft_update_combn(cb, n);
	}
}
