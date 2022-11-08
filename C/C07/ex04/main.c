/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:47:08 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/05 17:36:06 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	len_nb(int nbr_b10, char *base_to);

char	*ft_wrtchar(char c, char *dest);

char	*ft_wrtnbr_base(int nbr, char *base, char *dest);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("nbr : '%s', base_from: '%s', base_to: '%s'\n", 
		argv[1], argv[2], argv[3]);
	printf("ft_convert_base: '%s'\n", 
		ft_convert_base(argv[1], argv[2], argv[3]));
}
