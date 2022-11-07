/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:21:59 by jgermany          #+#    #+#             */
/*   Updated: 2022/09/24 14:24:14 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char c)
{
	if (!((c >= 'a' && c <= 'z') \
	|| (c >= 'A' && c <= 'Z') \
	|| (c >= '0' && c <= '9')))
		return (0);
	return (1);
}

int	is_lower(char c)
{
	if (!(c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}

int	is_upper(char c)
{
	if (!(c >= 'A' && c <= 'Z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && is_lower(str[i]))
			str[i] -= 32;
		if (i > 0)
		{
			if (!is_alphanum(str[i - 1]) && is_lower(str[i]))
				str[i] -= 32;
			if (is_alphanum(str[i - 1]) && is_upper(str[i]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
