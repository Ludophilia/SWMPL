/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:29:01 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:15:40 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(int argc, char **argv)
{
	char	dest1[25];
	char	dest2[25];

	if (argc != 2)
		return (1);
	printf("ft_strcpy('%s') = '%s'\n", argv[1], ft_strcpy(dest1, argv[1]));
	printf("strcpy('%s') = '%s'\n", argv[1], strcpy(dest2, argv[1]));
	return (0);
}
