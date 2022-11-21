/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:09:54 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/21 16:27:20 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if ((min >= max))
	{
		range = (int **)0;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (*range && ((min + i) < max))
	{
		(*range)[i] = min + i;
		i++;
	}
	if (*range)
		return (i);
	return (-1);
}
