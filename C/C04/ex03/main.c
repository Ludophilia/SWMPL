/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:56:15 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:19:59 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("ft_atoi('%s') = %i\n", argv[1], ft_atoi(argv[1]));
	printf("atoi('%s') = %i\n", argv[1], atoi(argv[1]));
	return (0);
}
