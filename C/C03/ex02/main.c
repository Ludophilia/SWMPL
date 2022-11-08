/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:33:39 by jgermany          #+#    #+#             */
/*   Updated: 2022/09/26 16:46:46 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

int	main(int argc, char **argv)
{	
	char	dest1[100];
	char	dest2[100];
	int 	i;

	if (argc != 3)
		return (1);
	i = 0;
	while (argv[1][i])
	{
		dest1[i] = argv[1][i];
		dest2[i] = argv[1][i];
		i++;
	}
	printf("ft_strcat(\"%s\", \"%s\") = %s\n", argv[1], argv[2],
	ft_strcat(dest1, argv[2]));
	printf("strcat(\"%s\", \"%s\") = %s\n", argv[1], argv[2],
	strcat(dest2, argv[2]));
}
