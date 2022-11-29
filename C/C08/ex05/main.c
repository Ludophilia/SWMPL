/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:53:13 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/29 20:02:15 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	main(void)
{
	char		*strs[] = { "abc", "lol", "01234", "guts", 0 };
	t_stock_str	*structs;

	structs = ft_strs_to_tab(4, strs);
	(structs)->copy = "def";
	(structs + 1)->copy = "wtf!";
	(structs + 3)->copy = "griffith";
	ft_show_tab(structs);
	free(structs);
	structs = (t_stock_str *)0;
	return (0);
}
