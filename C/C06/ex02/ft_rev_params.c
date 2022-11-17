/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:46:34 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/17 17:47:50 by jgermany         ###   ########.fr       */
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
