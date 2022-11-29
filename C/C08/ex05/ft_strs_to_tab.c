/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:50:30 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/29 19:42:14 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		i;

	i = ft_strlen(src);
	new_str = (char *)malloc((i + 1) * sizeof(char));
	if (!new_str)
		return ((char *)0);
	i = 0;
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\x0';
	return (new_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*structs;
	int			i;

	structs = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!structs)
		return (((t_stock_str *)0));
	i = -1;
	while (++i < ac)
	{
		structs[i].size = ft_strlen(av[i]);
		structs[i].str = av[i];
		structs[i].copy = ft_strdup(av[i]);
	}
	structs[i].str = (char *)0;
	return (structs);
}
