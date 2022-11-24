/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:47:08 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:24:36 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("ft_convert_base(%s, %s, %s):\n	->'%s'\n",
		argv[1], argv[2], argv[3],
		ft_convert_base(argv[1], argv[2], argv[3]));
}
