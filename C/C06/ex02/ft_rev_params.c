/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:46:34 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:23:37 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		while (*argv[argc - 1])
		{
			write(1, argv[argc - 1], 1);
			argv[argc - 1]++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
