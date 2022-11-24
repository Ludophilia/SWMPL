/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:34:42 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:16:21 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	c;

	c = 0;
	while (c != 127)
	{
		if (ft_str_is_printable(&c))
		{
			printf("\"%s\" (%i) isprintable (%i)\n", &c, c,
				ft_str_is_printable(&c));
		}
		c++;
	}
}
