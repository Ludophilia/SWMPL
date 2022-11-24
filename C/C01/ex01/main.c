/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:30:52 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:13:12 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	b_nbr;
	int	*p_nbr1;
	int	**p_nbr2;
	int	***p_nbr3;
	int	****p_nbr4;
	int	*****p_nbr5;
	int	******p_nbr6;
	int	*******p_nbr7;
	int	********p_nbr8;
	int	*********nbr;

	p_nbr1 = &b_nbr;
	p_nbr2 = &p_nbr1;
	p_nbr3 = &p_nbr2;
	p_nbr4 = &p_nbr3;
	p_nbr5 = &p_nbr4;
	p_nbr6 = &p_nbr5;
	p_nbr7 = &p_nbr6;
	p_nbr8 = &p_nbr7;
	nbr = &p_nbr8;
	ft_ultimate_ft(nbr);
	printf("b_nbr = %i\n", b_nbr);
}
