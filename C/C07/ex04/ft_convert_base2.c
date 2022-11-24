/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 01:26:07 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 15:41:37 by jgermany         ###   ########.fr       */
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
