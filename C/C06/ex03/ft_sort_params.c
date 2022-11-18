/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:06:33 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/18 13:13:04 by jgermany         ###   ########.fr       */
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
	char	**cargv;

	while (*(argv + 1))
	{
		cargv = argv;
		while (*(cargv + 1))
		{
			if (ft_strcmp(*cargv, *(cargv + 1)) > 0)
			{
				t = *cargv;
				*cargv = *(cargv + 1);
				*(cargv + 1) = t;
			}
			cargv++;
		}
		argv++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	ft_sort_tab(argv);
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
