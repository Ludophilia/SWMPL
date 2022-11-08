/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:34:37 by jgermany          #+#    #+#             */
/*   Updated: 2022/09/18 14:47:26 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(int x, int y, int i, int j)
{
	if (i == 0)
	{
		if (j == 0)
			ft_putchar('/');
		else if (j == (y - 1))
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (i == (x - 1))
	{
		if (j == 0)
			ft_putchar('\\');
		else if (j == (y - 1))
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (j == 0 || j == (y - 1))
			ft_putchar('*');
		else
			ft_putchar(' ');
	}	
}	

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			ft_display(x, y, i, j);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
