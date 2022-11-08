/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:33:39 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/08 20:37:17 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(int argc, char **argv)
{	
	if (argc != 3)
		return (1);
	printf("ft_strstr('%s', '%s') : '%s'\n",
		argv[1], argv[2], ft_strstr(argv[1], argv[2]));
	printf("strstr('%s', '%s') : '%s'\n",
		argv[1], argv[2], strstr(argv[1], argv[2]));
}
