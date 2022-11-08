/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:11:37 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/05 17:37:36 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	find_id(char c, char *base);

int	is_sign(char c);

int	is_space(char c);

int	check_base(char *base);

int	is_illeg_at(int i, char *str, char *base);

int	ft_atoi_base(char *str, char *base)
{	
	int	i;
	int	res;
	int	sgn;
	int	rdx;

	i = 0;
	res = 0;
	sgn = 1;
	rdx = check_base(base);
	if (!rdx)
		return (0);
	while (str[i])
	{
		if (is_illeg_at(i, str, base))
			break ;
		if (str[i] == '-')
			sgn *= -1;
		else if (find_id(str[i], base) >= 0)
			res = (rdx * res) + find_id(str[i], base);
		if (!(find_id(str[i + 1], base) >= 0)
			&& find_id(str[i], base) >= 0)
			return (sgn * res);
		i++;
	}
	return (0);
}

int	len_nb(int nbr_b10, char *base_to)
{
	int	i;
	int	rdx;

	rdx = check_base(base_to);
	if (!rdx)
		return (0);
	i = 0;
	if (nbr_b10 < 0)
		i++;
	while (nbr_b10)
	{
		nbr_b10 /= rdx;
		i++;
	}
	return (i);
}

char	*ft_wrtchar(char c, char *dest)
{
	*dest = c;
	dest++;
	return (dest);
}

char	*ft_wrtnbr_base(int nbr, char *base, char *dest)
{
	int		rdx;

	rdx = check_base(base);
	if (!rdx)
		return ((char *)0);
	if (nbr >= rdx || nbr <= -rdx)
		dest = ft_wrtnbr_base(nbr / rdx, base, dest);
	if (nbr < 0 && nbr > -rdx)
		dest = ft_wrtchar('-', dest);
	if (nbr < 0)
		dest = ft_wrtchar(base[-(nbr % rdx)], dest);
	else
		dest = ft_wrtchar(base[nbr % rdx], dest);
	return (dest);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_b10;
	char	*nbr_bto;
	char	*entry;

	if (!check_base(base_from) || !check_base(base_to))
		return ((char *)0);
	nbr_b10 = ft_atoi_base(nbr, base_from);
	nbr_bto = (char *)malloc((len_nb(nbr_b10, base_to) + 1) * sizeof(char));
	if (!nbr_bto)
		return ((char *)0);
	entry = nbr_bto;
	nbr_bto = ft_wrtnbr_base(nbr_b10, base_to, nbr_bto);
	*nbr_bto = '\0';
	return (entry);
}
