/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power0.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:18:35 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:21:53 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nb_sign;
	int	pow_sign;

	nb_sign = 1;
	pow_sign = 1;
	if (!power)
		return (1);
	if (nb < 0 && power % 2 == 0)
		nb_sign *= -1;
	if (power < 0)
		pow_sign *= -1;
	while (--power > 0)
		nb *= nb;
	if (pow_sign == -1)
		return (1 / (nb * nb_sign));
	return (nb * nb_sign);
}
