/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:46:46 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:20:14 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	is_space(char c)
{
	return ((c >= '\t' && c <= '\r') || (c == '\x20'));
}

int	id(char c, char *base)
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

	if (is_sign(base[0]) || is_space(base[0]))
		return (0);
	i = 0;
	while (base[i])
	{
		j = 1;
		while (base[i + j])
		{
			if ((base[i + j] == base[i]) || is_sign(base[i + j])
				|| is_space(base[i + j]))
				return (0);
			j++;
		}
		if ((i == 0) && (j == 1))
			return (0);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{	
	int	i;
	int	res;
	int	sign;
	int	radix;

	sign = 1;
	res = 0;
	i = 0;
	radix = check_base(base);
	while (str[i] && (radix > 0))
	{
		if (!(is_space(str[i]) || is_sign(str[i]) || id(str[i], base) >= 0))
			break ;
		else if (!(is_sign(str[i + 1]) || id(str[i + 1], base) >= 0)
			&& is_sign(str[i]))
			break ;
		if (str[i] == '-')
			sign *= -1;
		else if (id(str[i], base) >= 0)
			res = (radix * res) + id(str[i], base);
		if (!(id(str[i + 1], base) >= 0) && (id(str[i], base) >= 0))
			return (sign * res);
		i++;
	}
	return (0);
}
