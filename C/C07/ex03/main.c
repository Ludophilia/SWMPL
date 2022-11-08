/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:49:08 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/03 21:45:17 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char	**strs;
	int	size;
	int	i;

	size = atoi(argv[1]);
	strs = (char**)malloc(size * sizeof(char*));
	if (!strs || (argc < 2))
		return (1);
	i = 0;
	while (i < size)
	{
		strs[i] = argv[2 + i];
		i++;
	}
	printf("ft_strjoin : %s\n", ft_strjoin(size, strs, argv[2 + size]));
	return (1);
}
