/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:20:26 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:20:07 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{	
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		if ((i == 0) && (base[i] == '+' || base[i] == '-'))
			return (0);
		j = 1;
		while (base[i + j])
		{
			if (base[i + j] == base[i] || base[i + j] == '+'
				|| base[i + j] == '-')
				return (0);
			j++;
		}
		if ((i == 0) && (j == 1))
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		radix;

	radix = ft_check_base(base);
	if (!radix)
		return ;
	if (nbr >= radix || nbr <= -radix)
		ft_putnbr_base(nbr / radix, base);
	if (nbr < 0 && nbr > -radix)
		ft_putchar('-');
	if (nbr < 0)
		ft_putchar(base[-(nbr % radix)]);
	else
		ft_putchar(base[nbr % radix]);
}
