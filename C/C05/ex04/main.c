/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:13:56 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/04 12:43:48 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("ft_fibonacci: %i\n",
		ft_fibonacci(atoi(argv[1])));
}
