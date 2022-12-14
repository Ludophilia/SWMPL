/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgermany <nyaritakunai@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:18:19 by jgermany          #+#    #+#             */
/*   Updated: 2022/11/24 22:17:09 by jgermany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putmem(unsigned long nb)
{
	int	i;
	unsigned int	base;
	char	*glyph;
	char	mem[17];

	glyph = "0123456789abcdef";
	i = 15;
	base = 16;
	mem[16] = '\0';
	while (nb >= 1)
	{
		mem[i] = glyph[nb % base]; 
		nb /= base;
		i--;
	}
	while (i >= 0)
	{
		mem[i] = '0';
		i--;
	}
	ft_putstr(mem);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	if (size) 
		ft_putmem((unsigned long)addr);
	return (NULL);	
}
