/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:33:39 by jgermany          #+#    #+#             */
/*   Updated: 2022/09/26 22:23:28 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);

int	main(int argc, char **argv)
{	
	if (argc != 3)
		return (1);
	printf("[DEBUG (main)] str = \'%s\' | to_find = \'%s\'\n\n", argv[1], argv[2]);
	printf("ft_strstr : \'%s\'\n", ft_strstr(argv[1], argv[2]));
	printf("strstr : \'%s\'\n", strstr(argv[1], argv[2]));
}
