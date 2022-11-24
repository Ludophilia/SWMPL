/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:06:33 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:23:46 by jgermany         ###   ########.fr       */
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
	char	**ori;
	char	**cur;
	int		dff;

	ori = argv;
	while (*(argv + 1))
	{
		cur = ori;
		dff = argv - cur;
		while (*(cur + 1 + dff))
		{
			if (ft_strcmp(*cur, *(cur + 1)) > 0)
			{
				t = *cur;
				*cur = *(cur + 1);
				*(cur + 1) = t;
			}
			cur++;
		}
		argv++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	ft_sort_tab(argv + 1);
	while (*++argv)
	{
		while (**argv)
		{
			write(1, *argv, 1);
			(*argv)++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
