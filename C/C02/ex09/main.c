/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:12:07 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:16:41 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

void	init(char *arr, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
}

int	main(int argc, char **argv)
{
	char	arr[100];

	if (argc != 2)
		return (1);
	init(arr, argv[1]);
	printf("%s\n", ft_strcapitalize(arr));
	return (0);
}
