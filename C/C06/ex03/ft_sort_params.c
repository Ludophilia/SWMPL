/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:06:33 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/17 19:17:49 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_sort_tab(char **argv)
{
	char	*t;

	while (*(argv + 1))
	{
		while (*(*(argv + 1) + 1))
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				t = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = t;
			}
			**// j++;
		}
		argv++;
	}
}

int	main(int argc, char s**argv)
{
	if (argc < 2)
		return (1);
	argv += 1;
	ft_sort_tab(argv);
	while (*argv)
	{
		while (**argv)
		{
			write(1, *argv, 1);
			*argv++;
		}
		write(1, "\n", 1);
		argv++;
	}
	return (0);
}
