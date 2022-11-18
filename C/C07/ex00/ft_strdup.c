/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:26:20 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/18 19:59:08 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		i;

	i = 0;
	while (src[i])
		i++;
	new_str = (char *)malloc((i + 1) * sizeof(char));
	if (!new_str)
		return ((char *)0);
	i = 0;
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\x0';
	return (new_str);
}
