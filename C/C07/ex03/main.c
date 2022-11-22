/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:49:08 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/22 16:04:41 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char	**strs;
	int		size;
	int		i;

	if ((argc < 4))
		return (1);
	size = atoi(argv[1]);
	strs = (char **)malloc(size * sizeof(char *));
	if (!strs)
	{
		printf("strs = %p\n", strs);
		return (1);
	}
	i = 0;
	while ((i < size) && argv[2 + i + 1])
	{
		strs[i] = argv[2 + i];
		i++;
	}
	printf("ft_strjoin : '%s'\n", ft_strjoin(size, strs, argv[2 + i]));
	return (0);
}
