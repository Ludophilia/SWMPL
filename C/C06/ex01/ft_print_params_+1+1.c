/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params_+1+1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:52:37 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:23:33 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	argv++;
	while (argv[1]) // *(argv + 1)
	{
		while (argv[1][1]) // *(*(argv + 1) + 1)
		{
			write(1, argv[1] + 1, 1);
			argv[1]++; // *(argv + 1) += 1;
		}
		write(1, "\n", 1);
		argv++;
	}
	return (0);
}
