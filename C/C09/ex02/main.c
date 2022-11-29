/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:58:19 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/25 13:08:55 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char	**strs;
	int		i;

	if (argc != 3)
		return (1);
	strs = ft_split(argv[1], argv[2]);
	if (!strs)
		return (1);
	i = 0;
	printf("ft_split('%s', '%s')\n", argv[1], argv[2]);
	while (strs[i])
	{
		printf("	-> strs[%i]: '%s'\n", i, strs[i]);
		i++;
	}
	if (!*strs)
		printf("	-> Empty array\n");
	return (0);
}
