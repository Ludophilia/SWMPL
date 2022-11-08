/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:29:01 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/08 13:31:49 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// NOTE - 0 is not managed. But "" is printable right ??

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	c;

	c = -128;
	while (c != 127)
	{
		ft_putstr_non_printable(&c);
		printf("\n");
		c++;
	}
	ft_putstr_non_printable(&c);
	printf("\n");
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	printf("\n");
	ft_putstr_non_printable("This is very special : \a\b\t\n\v\f\r");
	printf("\n");
	ft_putstr_non_printable("Cou\x00cou\n\x03tu\x0Fvas\x17\nbien?");
	printf("\n");
	return (0);
}
