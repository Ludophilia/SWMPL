/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:56:15 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:20:41 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("str : \'%s\', base : \'%s\'\n", argv[1], argv[2]);
	printf("atoi_base : %i\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
