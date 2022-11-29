/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:33:46 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/26 22:10:15 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"

int	main(void)
{
	printf("ABS(-(3 * 4)) = %i\n", ABS(-(3 * 4)));
	printf("ABS(-(-3 * 4)) = %i\n", ABS(-(-3 * 4)));
	printf("ABS(-(-3 * -4)) = %i\n", ABS(-(-3 * -4)));
	printf("ABS(-65356) = %i\n", ABS(-65356));
	printf("ABS(255)) = %i\n", ABS(255));
}