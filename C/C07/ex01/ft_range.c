/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:09:54 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/20 21:06:31 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if ((min >= max))
		return ((int *)0);
	range = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (range && ((min + i) < max))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
