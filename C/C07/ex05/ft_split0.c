/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:37:20 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/25 12:13:39 by jgermany         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{	
		j = 0;
		while (str[i + j] == to_find[j])
		{	
			if (!to_find[j + 1])
				return ((str + i) + 0);
			else if (str[i + j + 1] != to_find[j + 1])
				break ;
			j++;
		}		
		i++;
	}
	return ((char *)0);
}

char	*create_word(char *str, char *lim)
{
	unsigned long	i;
	unsigned long	len;
	char			*word;

	i = 0;
	if (lim)
		len = lim - str;
	else
		len = ft_strlen(str);
	word = (char *)malloc(len * sizeof(char) + 1);
	if (!word || !len)
		return ((char *)0);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	count_words(char *str, char *charset)
{
	char	*lim;
	int		i;

	i = 0;
	lim = str;
	while (lim)
	{
		if (ft_strstr(lim, charset))
			lim = ft_strstr(lim, charset) + ft_strlen(charset);
		else
			lim = (char *)0;
		i++;
	}
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	char	*pos;
	char	*lim;
	int		len_wrds;
	int		i;

	len_wrds = count_words(str, charset);
	res = (char **)malloc(len_wrds * sizeof(char *) + 1);
	lim = (char *)0;
	if (!res)
		return ((char **)0);
	i = 0;
	while (i < len_wrds)
	{
		if (!lim)
			pos = str;
		else
			pos = lim + ft_strlen(charset);
		lim = ft_strstr(pos, charset);
		res[i] = create_word(pos, lim);
		i++;
	}
	res[i] = (char *)0;
	return (res);
}
