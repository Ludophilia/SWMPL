/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:43:12 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/07 14:55:46 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	printf("len(\"\") = %i\n", ft_strlen(""));
	printf("len(\"0\") = %i\n", ft_strlen("0"));
	printf("len(\"42\") = %i\n", ft_strlen("42"));
	printf("len(\"1234567890\") = %i\n", ft_strlen("1234567890"));
	printf("len(\"Bienvenue les piscineux\") = %i\n", ft_strlen("Bienvenue les \
	piscineux"));
}
