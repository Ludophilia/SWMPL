/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:56:15 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:20:09 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("nbr : \'%i\', base : \'%s\'\n", atoi(argv[1]), argv[2]);
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	printf("\n");
	return (0);
}
