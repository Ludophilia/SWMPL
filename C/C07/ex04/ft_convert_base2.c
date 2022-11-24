/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 01:26:07 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 21:05:50 by jgermany         ###   ########.fr       */
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
	int	id;

	id = 0;
	while (base[id])
	{
		if (base[id] == c)
			return (id);
		id++;
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
		j = 0;
		while (base[i + j])
		{
			if (base[i + (j + 1)] == base[i])
				return (0);
			if ((i == 0) && (is_sign(base[i + j]) || is_space(base[i + j])))
				return (0);
			j++;
		}
		if ((i == 0) && (j == 1))
			return (0);
		i++;
	}
	return (i);
}

int	len_nbr(int nbr_in, char *base_to)
{
	int	radix;
	int	len;

	radix = check_base(base_to);
	if (!radix)
		return (0);
	len = 0;
	if (nbr_in < 0)
		len++;
	while (nbr_in)
	{
		nbr_in /= radix;
		len++;
	}
	return (len);
}
