/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:05:38 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:18:51 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dpos0;
	unsigned int	dpos;
	unsigned int	spos;

	dpos = 0;
	while (size && dest[dpos])
	{
		dpos++;
		size--;
	}
	dpos0 = dpos;
	spos = 0;
	while (src[spos])
	{
		if (size > 1)
		{
			dest[dpos] = src[spos];
			dpos++;
			size--;
		}
		spos++;
	}
	if (size)
		dest[dpos] = '\0';
	return (dpos0 + spos);
}
