/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:46:46 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/11 19:13:56 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	check_base(char *base)
{	
	char	cmp[1000];
	int		i;
	int		k;

	i = 0;
	k = 0;
	cmp[0] = '\0';
	while (base[i] && (i < 1000))
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == '\x20')
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

int	is_illeg_at(int i, char *str, char *base)
{
	if (!(((str[i] >= '\t' && str[i] <= '\r') || str[i] == '\x20') \
		|| (str[i] == '-' || str[i] == '+') || \
		find_id(str[i], base) >= 0))
		return (1);
	else if (!((str[i + 1] == '-' || str[i + 1] == '+') \
		|| ((str[i + 1] >= '\t' && str[i + 1] <= '\r') \
		|| str[i + 1] == '\x20')) && ((str[i] >= '\t' \
		&& str[i] <= '\r') || str[i] == '\x20'))
		return (1);
	else if (!((str[i + 1] == '-' || str[i + 1] == '+') \
		|| find_id(str[i + 1], base) >= 0) && \
		(str[i] == '-' || str[i] == '+'))
		return (1);
	return (0);
}

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
