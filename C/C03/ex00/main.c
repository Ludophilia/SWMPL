/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:33:39 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:17:34 by jgermany         ###   ########.fr       */
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

// int    main(void)
// {
// 	printf("R: %i\n", ft_strncmp("on", "in", 2));
// 	printf("R: %i\n", ft_strncmp("hello", "hello", 4));
// 	printf("R: %i\n", ft_strncmp("label", "labelisation", 4));
// 	printf("R: %i\n", ft_strncmp("label", "labelisation", 8));
// 	printf("R: %i\n", ft_strncmp("labelisation", "label", 4));
// 	printf("R: %i\n\n", ft_strncmp("", "", 5));

// 	printf("R: %i\n", strncmp("on", "in", 2));
// 	printf("R: %i\n", strncmp("hello", "hello", 4));
// 	printf("R: %i\n", strncmp("label", "labelisation", 4));
// 	printf("R: %i\n", strncmp("label", "labelisation", 8));
// 	printf("R: %i\n", strncmp("labelisation", "label", 4));
// 	printf("R: %i\n", strncmp("", "", 5));
// }