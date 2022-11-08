/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:57:42 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/07 19:33:24 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%s\n", ft_strlowcase(argv[1]));
}
