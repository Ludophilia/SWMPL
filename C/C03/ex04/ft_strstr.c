/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:09:52 by jgermany          #+#    #+#             */
/*   Updated: 2022/09/29 15:03:41 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[i])
	{	
		while (str[i + j] == to_find[j])
		{	
			if (!to_find[j + 1])
				return (str + i);
			else if (str[i + j + 1] != to_find[j + 1])
				break ;
			j++;
		}		
		i++;
	}
	return ((char *)0);
}
