/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_hq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:58:19 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:10:32 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char	**strs;
	int	i;

	if (argc != 3)
		return (1);
	strs = ft_split(argv[1], argv[2]);
	if (!strs)
		return (1);
	i = 0;
	while (strs[i])
	{
		printf("strs[%i]: '%s'\n", i, strs[i]);
		i++;
	}
	return (0);
}