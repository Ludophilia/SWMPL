/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:40:03 by jgermany          #+#    #+#             */
/*   Updated: 2022/09/25 21:23:42 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (size > 0 && i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (src[j])
		j++;
	if (size != 0)
		dest[i] = '\0';
	return (j);
}
