/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:11:37 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/26 00:42:33 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_convert_base.h"

int	ft_atoi_base(char *str, char *base)
{	
	int	res;
	int	sign;
	int	radix;

	sign = 1;
	res = 0;
	radix = check_base(base);
	while (*str && (radix > 0))
	{
		if (!(is_space(*str) || is_sign(*str) || id(*str, base) >= 0))
			break ;
		else if (!(is_sign(*(str + 1)) || id(*(str + 1), base) >= 0)
			&& is_sign(*str))
			break ;
		if (*str == '-')
			sign *= -1;
		else if (id(*str, base) >= 0)
			res = (radix * res) + id(*str, base);
		if (!(id(*(str + 1), base) >= 0) && (id(*str, base) >= 0))
			return (sign * res);
		str++;
	}
	return (0);
}

char	*ft_itoa_base_sp(int nbr_in, char *base, char *nbr_out)
{
	int		radix;

	radix = check_base(base);
	if (!radix)
		return ((char *)0);
	if ((nbr_in >= radix) || (nbr_in <= -radix))
		nbr_out = ft_itoa_base_sp((nbr_in / radix), base, nbr_out);
	if ((nbr_in < 0) && (nbr_in > -radix))
		*nbr_out++ = '-';
	if (nbr_in < 0)
		*nbr_out++ = base[-(nbr_in % radix)];
	else
		*nbr_out++ = base[(nbr_in % radix)];
	return (nbr_out);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_in;
	char	*nbr_out;
	char	*pos_out;

	if (!check_base(base_from) || !check_base(base_to))
		return ((char *)0);
	nbr_in = ft_atoi_base(nbr, base_from);
	nbr_out = (char *)malloc((len_nbr(nbr_in, base_to) + 1) * sizeof(char));
	if (!nbr_out)
		return ((char *)0);
	pos_out = nbr_out;
	pos_out = ft_itoa_base_sp(nbr_in, base_to, pos_out);
	*pos_out = '\0';
	return (nbr_out);
}
