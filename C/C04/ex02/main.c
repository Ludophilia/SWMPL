/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:56:15 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:19:51 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("arg :\'%i\'\n", atoi(argv[1]));
	ft_putnbr(atoi(argv[1]));
	printf("\n");
	return (0);
}
