/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:49:08 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/03 15:04:41 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char	*dest;

	if (argc != 2)
		return (1);
	dest = ft_strdup(argv[1]);
	printf("src : '%s' in %p\n", argv[1], argv[1]);
	printf("ft_strdup: '%s' in %p\n", dest, dest);
}
