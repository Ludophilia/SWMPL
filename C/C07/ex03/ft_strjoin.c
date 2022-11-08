/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:46:42 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/06 23:33:36 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_sprlen(int size, char **strs, char *sep)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (i < size)
	{
		t += ft_strlen(strs[i]);
		if (i < (size - 1))
			t += ft_strlen(sep);
		i++;
	}
	return (t);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		sprlen;
	int		i;

	sprlen = ft_sprlen(size, strs, sep) + 1;
	str = (char *)malloc(sprlen * sizeof(char));
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < (size - 1))
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
