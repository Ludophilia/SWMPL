/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:47:08 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/26 00:43:22 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_convert_base.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("ft_convert_base(%s, %s, %s):\n	->'%s'\n",
		argv[1], argv[2], argv[3],
		ft_convert_base(argv[1], argv[2], argv[3]));
}
