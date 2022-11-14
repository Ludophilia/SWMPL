/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:46:46 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/14 23:50:14 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	find_id(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *base)
{	
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		if ((i == 0) && is_sign(base[i]))
			return (0);
		j = 1;
		while (base[i + j])
		{
			if (base[i + j] == base[i] || is_sign(base[i + j]))
				return (0);
			j++;
		}
		if ((i == 0) && (j == 1))
			return (0);
		i++;
	}
	return (i);
}

int	is_illeg_at(int i, char *str, char *base)
{
	
	if (!(((str[i] >= '\t' && str[i] <= '\r') || (str[i] == '\x20'))
		|| is_sign(str[i]) || find_id(str[i], base) >= 0))
		return (1);
	if (!(is_sign(str[i + 1]) || find_id(str[i + 1], base) >= 0)
		&& is_sign(str[i]))
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{	
	int	i;
	int	res;
	int	sign;
	int	radix;

	i = 0;
	res = 0;
	sign = 1;
	radix = check_base(base);
	if (!radix)
		return (0);
	while (str[i])
	{
		if (!(is_space(str[i]) || is_sign(str[i]) || id(str[i], base) >= 0) ||
			(!(is_sign(str[i + 1]) || id(str[i + 1], base) >= 0)
			&& is_sign(str[i])))
			break ;
		if (str[i] == '-')
			sign *= -1;
		else if (find_id(str[i], base) >= 0)
			res = (radix * res) + find_id(str[i], base);
		if (!(find_id(str[i + 1], base) >= 0) && find_id(str[i], base) >= 0)
			return (sign * res);
		i++;
	}
	return (0);
}
