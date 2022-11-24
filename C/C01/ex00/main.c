/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:21:57 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:12:51 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	b_nbr;
	int	*nbr;

	nbr = &b_nbr;
	ft_ft(nbr);
	printf("b_nbr = %i\n", *nbr);
}
