/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <jgermany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:43:12 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/07 18:13:46 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sort_check(int *tab, int size)
{
	int	i;

	i = 0;
	while ((i + 1) < size)
	{
		if (tab[i] > tab[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (ft_sort_check(tab, size))
	{
		if (!((i + 1) < size))
			i = 0;
		if (tab[i] > tab[i + 1])
		{
			t = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = t;
		}
		i++;
	}
}
