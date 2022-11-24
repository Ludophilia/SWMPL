/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params0.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:06:33 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:23:47 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	ft_sort_check(char **tab, int size)
{
	int	i;

	i = 0;
	while ((i + 1) < size)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			return (1);
		i++;
	}
	return (0);
}

void	ft_sort_tab(char **tab, int size)
{
	int		i;
	char	*t;

	i = 0;
	while (ft_sort_check(tab, size))
	{
		if (!((i + 1) < size))
			i = 0;
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			t = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = t;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, (str + i), 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (1);
	i = 0;
	ft_sort_tab(argv + 1, argc - 1);
	while (argv[i + 1])
	{
		ft_putstr(argv[i + 1]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
