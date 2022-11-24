/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:49:08 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:24:02 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char	*new_str;

	if (argc != 2)
		return (1);
	new_str = ft_strdup(argv[1]);
	printf("src : '%s' in %p\n", argv[1], argv[1]);
	printf("ft_strdup: '%s' in %p\n", new_str, new_str);
}
