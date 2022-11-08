/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:33:39 by jgermany          #+#    #+#             */
/*   Updated: 2022/09/26 15:31:54 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("ft_strcmp(\"%s\", \"%s\") = %i\n", argv[1], argv[2], 
		ft_strcmp(argv[1], argv[2]));
	printf("strcmp(\"%s\", \"%s\") = %i\n", argv[1], argv[2], 
		strcmp(argv[1], argv[2]));
}
