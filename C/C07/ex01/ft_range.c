/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:09:54 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/06 23:48:57 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = (int *)malloc((max - min) * sizeof(int));
	if (!arr || (min >= max))
		return ((int *)0);
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
