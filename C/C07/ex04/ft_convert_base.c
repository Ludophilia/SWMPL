/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:11:37 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 00:24:01 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	find_id(char c, char *base);

int	is_sign(char c);

int	is_space(char c);

int	check_base(char *base);

int	is_illeg_at(int i, char *str, char *base);

int	len_nb(int nbr_b10, char *base_to)
{	// This can be improved too right?
	int	i;
	int	radix;

	radix = check_base(base_to);
	if (!radix)
		return (0);
	i = 0;
	if (nbr_b10 < 0)
		i++;
	while (nbr_b10)
	{
		nbr_b10 /= radix;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base) 
{	/* Tomorrow 24/11. Use atoi_base from C04 which is more compact. 
	// Add pointers maybe ? */
	int	i;
	int	res;
	int	sgn;
	int	radix;

	i = 0;
	res = 0;
	sgn = 1;
	radix = check_base(base);
	if (!radix)
		return (0);
	while (str[i])
	{
		if (is_illeg_at(i, str, base))
			break ;
		if (str[i] == '-')
			sgn *= -1;
		else if (find_id(str[i], base) >= 0)
			res = (radix * res) + find_id(str[i], base);
		if (!(find_id(str[i + 1], base) >= 0)
			&& find_id(str[i], base) >= 0)
			return (sgn * res);
		i++;
	}
	return (0);
}

char	*ft_itoa_base(int nbr_in, char *base, char *nbr_out)
{
	int		radix;

	radix = check_base(base);
	if (!radix)
		return ((char *)0);
	if ((nbr_in >= radix) || (nbr_in <= -radix))
		nbr_out = ft_itoa_base((nbr_in / radix), base, nbr_out);
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
	nbr_out = (char *)malloc((len_nb(nbr_in, base_to) + 1) * sizeof(char));
	if (!nbr_out)
		return ((char *)0);
	pos_out = nbr_out;
	pos_out = ft_itoa_base(nbr_in, base_to, pos_out);
	*pos_out = '\0';
	return (nbr_out);
}
