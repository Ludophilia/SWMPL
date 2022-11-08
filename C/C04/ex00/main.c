/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:56:15 by jgermany          #+#    #+#             */
/*   Updated: 2022/09/29 17:28:03 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("ft_strlen(\'%s\') = %i\n", argv[1], ft_strlen(argv[1]));
	printf("strlen(\'%s\') = %li\n", argv[1], strlen(argv[1]));
	//printf("ft_strlen(\'%s\') = %i\n", "\\n", ft_strlen("\n"));
	return (0);
}