/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:13:56 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/03 22:23:37 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("ft_iterative_factorial: %i\n",
		ft_iterative_factorial(atoi(argv[1])));
}	