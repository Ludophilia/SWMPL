/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:33:39 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:18:47 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(int argc, char **argv)
{	
	if (argc != 3)
		return (1);
	printf("ft_strstr('%s', '%s') : '%s'\n",
		argv[1], argv[2], ft_strstr(argv[1], argv[2]));
	printf("strstr('%s', '%s') : '%s'\n",
		argv[1], argv[2], strstr(argv[1], argv[2]));
}
