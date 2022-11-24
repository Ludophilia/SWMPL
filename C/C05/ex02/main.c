/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:13:56 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:21:56 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power);

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("ft_iterative_power: %i\n",
		ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}	
