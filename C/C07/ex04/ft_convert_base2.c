/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 01:26:07 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/05 17:17:48 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	is_space(char c)
{
	return ((c >= '\t' && c <= '\r') || c == '\x20');
}

int	check_base(char *base)
{	
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		if (is_sign(base[i]) || is_space(base[i]))
			return (0);
		j = 1;
		while (base[i + j])
		{
			if (base[i + j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	is_illeg_at(int i, char *str, char *base)
{
	if (!(is_space(str[i]) || is_sign(str[i]) \
		|| find_id(str[i], base) >= 0))
		return (1);
	else if (!(is_space(str[i + 1]) || is_sign(str[i + 1]))
		&& is_space(str[i]))
		return (1);
	else if (!(is_sign(str[i + 1]) || find_id(str[i + 1], base) >= 0)
		&& is_sign(str[i]))
		return (1);
	return (0);
}
