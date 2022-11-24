/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:43:27 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:23:29 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 1)
		return (1);
	while (**argv)
	{	
		write(1, *argv, 1);
		*argv += 1;
	}
	write(1, "\n", 1);
	return (0);
}
