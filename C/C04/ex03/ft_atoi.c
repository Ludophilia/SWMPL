/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:46:46 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/01 18:02:21 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == '\x20');
}

int	is_illeg_at(int i, char *str)
{
	if (!(is_space(str[i]) || is_sign(str[i]) || is_num(str[i])))
		return (1);
	else if (!(is_space(str[i + 1]) || is_sign(str[i + 1]))
		&& is_space(str[i]))
		return (1);
	else if (!(is_sign(str[i + 1]) || is_num(str[i + 1]))
		&& is_sign(str[i]))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{	
	int	i;
	int	res;
	int	sgn;

	i = 0;
	res = 0;
	sgn = 1;
	while (str[i])
	{
		if (is_illeg_at(i, str))
			break ;
		if (str[i] == '-')
			sgn *= -1;
		else if (is_num(str[i]))
			res = (10 * res) + (str[i] - '0');
		if (!is_num(str[i + 1]) && is_num(str[i]))
			return (sgn * res);
		i++;
	}
	return (0);
}
