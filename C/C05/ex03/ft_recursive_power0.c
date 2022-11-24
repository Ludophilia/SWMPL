/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power0.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:57:43 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:22:08 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{	
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power < 0 && nb > 0)
		return (1 / (nb * ft_recursive_power(nb, -power - 1)));
	else if (power < 0 && nb < 0)
		return (1 / (nb * ft_recursive_power(-nb, -power - 1)));
	else if (nb < 0)
		return (nb * ft_recursive_power(-nb, power - 1));
	return (nb * ft_recursive_power(nb, power - 1));
}
