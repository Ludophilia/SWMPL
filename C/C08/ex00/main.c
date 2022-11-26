/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:05:44 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/26 00:58:03 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		nb1;
	int		nb2;
	char	*str1;
	char	*str2;

	(void)argv;
	if (argc != 1)
		return (1);
	nb1 = 0;
	nb2 = 42;
	str1 = "Pantalla";
	str2 = "Teclado";
	printf("nb1 = %i, nb2 = %i\n", nb1, nb2);
	ft_swap(&nb1, &nb2);
	printf("ft_swap(&nb1, &nb2): nb1 = %i, nb2 = %i\n\n", nb1, nb2);
	printf("ft_putstr:\n");
	ft_putstr(str1);
	printf("\n");
	ft_putstr(str2);
	printf("\n\n");
	printf("ft_strlen(%s) : %i\n", str1, ft_strlen(str1));
	printf("ft_strlen(%s) : %i\n\n", str2, ft_strlen(str2));
	printf("ft_strcmp(%s, %s) : %i\n", str1, str2, ft_strcmp(str1, str2));
	printf("ft_strcmp(%s, %s) : %i\n", str2, str1, ft_strcmp(str2, str1));
	return (0);
}
