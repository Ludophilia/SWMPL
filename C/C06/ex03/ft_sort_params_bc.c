/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:06:33 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/17 17:22:18 by jgermany         ###   ########.fr       */
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

void	ft_sort_tab(char **tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	while ((i + 1) < size)
	{
		j = 0;
		while ((j + 1) < (size - i))
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				t = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = t;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	argv += 1;
	ft_sort_tab(argv, argc - 1); // ???
	while (*argv)
	{
		while (**argv)
		{
			write(1, *argv, 1);
			*argv += 1;
		}
		write(1, "\n", 1);
		argv += 1;
	}
	return (0);
}
