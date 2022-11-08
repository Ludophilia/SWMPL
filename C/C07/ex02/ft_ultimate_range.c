/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:09:54 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/06 23:44:09 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*sbrg;
	int	i;

	sbrg = (int *)malloc((max - min) * sizeof(int));
	if ((min >= max))
	{
		range = (int **)0;
		return (0);
	}
	if (!sbrg)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		sbrg[i] = min + i;
		i++;
	}
	*range = sbrg;
	return (i);
}
