/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:13:56 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/04 15:02:51 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("ft_is_prime(%i): %i\n", atoi(argv[1]), ft_is_prime(atoi(argv[1])));
	return (0);
}
