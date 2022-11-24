/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:52:54 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:18:56 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_null_check(char *dest, char *src)
{
	unsigned int	nulled;
	unsigned int	i;
	unsigned int	j;
	char			*strs[3];

	j = 0;
	nulled = 0;
	strs[0] = dest;
	strs[1] = src;
	strs[2] = (char *)0;
	while (strs[j])
	{
		i = 0;
		if (!strs[j][i])
			nulled += 1;
		while (strs[j][i])
		{
			if (!strs[j][i + 1])
				nulled += 1;
			i++;
		}
		j++;
	}
	return (nulled);
}

unsigned int	ft_lconcatenate(char *dest, char *src, unsigned int size,
		unsigned int ldst)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	nulled;

	i = 0;
	j = 0;
	nulled = ft_null_check(dest, src);
	while (i < size)
	{
		if (!dest[i])
			break ;
		i++;
	}
	while ((i + j) < size)
	{
		if (!src[j] || (((i + j) == (size - 1)) && nulled))
			break ;
		if (size > ldst)
			dest[i + j] = src[j];
		j++;
	}
	if (nulled && (size > ldst))
		dest[i + j] = '\0';
	return (nulled);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lsrc;
	unsigned int	ldst;
	unsigned int	nulled;

	lsrc = 0;
	ldst = 0;
	while (src[lsrc])
		lsrc++;
	while (dest[ldst])
		ldst++;
	nulled = ft_lconcatenate(dest, src, size, ldst);
	if (!nulled && (size > ldst))
		return (size);
	if (size < ldst)
		return (size + lsrc);
	return (ldst + lsrc);
}
