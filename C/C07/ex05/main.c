/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:47:08 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/06 21:55:45 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char	**res;
	int	i;

	if (argc != 3)
		return (1);
	printf("str : '%s', charset: '%s'\n", argv[1], argv[2]);
	i = 0;
	res = ft_split(argv[1], argv[2]);
	if (!res)
		return (1);
	while (res[i])
	{
		printf("'%s'\n", res[i]);
		i++;
	}
	return (0);
}
