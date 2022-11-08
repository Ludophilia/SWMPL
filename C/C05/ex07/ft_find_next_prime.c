/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:10:04 by jgermany          #+#    #+#             */
/*   Updated: 2022/10/04 22:29:58 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	max;

	if (nb <= 2)
		return (2);
	i = 0;
	max = 2147483647;
	while ((nb + i) < max)
	{
		if (ft_is_prime(nb + i))
			return (nb + i);
		i++;
	}
	return (max);
}
