/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:20:26 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/13 22:22:11 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_dupl(char c, char *cmp)
{
	int	i;

	i = 0;
	while (cmp[i])
	{
		if (c == cmp[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_base(char *base)
{	
	char	cmp[1000];
	int		i;
	int		k;

	i = 0;
	k = 0;
	cmp[0] = '\0';
	while (base[i] && (i < 1000))
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (!is_dupl(base[i], cmp))
		{
			cmp[k] = base[i];
			cmp[k + 1] = '\0';
			k++;
		}
		else
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		rdx;

	rdx = ft_check_base(base);
	if (!rdx)
		return ;
	if (nbr >= rdx || nbr <= -rdx)
		ft_putnbr_base(nbr / rdx, base);
	if (nbr < 0 && nbr > -rdx)
		ft_putchar('-');
	if (nbr < 0)
		ft_putchar(base[-(nbr % rdx)]);
	else
		ft_putchar(base[nbr % rdx]);
}
