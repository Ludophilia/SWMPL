/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:29:01 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:16:00 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("ft_str_is_numeric('%s') = %i\n",
		argv[1], ft_str_is_numeric(argv[1]));
	return (0);
}
