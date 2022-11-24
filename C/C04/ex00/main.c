/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:56:15 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:19:32 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("ft_strlen(\'%s\') = %i\n", argv[1], ft_strlen(argv[1]));
	printf("strlen(\'%s\') = %li\n", argv[1], strlen(argv[1]));
	return (0);
}
