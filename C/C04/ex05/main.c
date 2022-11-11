/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:56:15 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/11 19:14:01 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("str : \'%s\', base : \'%s\'\n", argv[1], argv[2]);
	printf("atoi_base : %i\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
