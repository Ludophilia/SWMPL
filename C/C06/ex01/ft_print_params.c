/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:52:37 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:23:34 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
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
