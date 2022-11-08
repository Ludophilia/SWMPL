#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int    ft_strcmp(char *s1, char *s2)
{
	int    i;
	
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

int    ft_get_radix(char *base)
{
	if (ft_strcmp(base, "0123456789") == 0)
		return (10); 
	else if (ft_strcmp(base, "01") == 0)
		return (2);
	else if (ft_strcmp(base, "0123456789ABCDEF") == 0)
		return (16);
	else if (ft_strcmp(base, "poneyvif") == 0)
		return (8);
	return (0);
}

void    ft_putnbr_base(int nb, char *base)
{
	int    rdx;

	if(!(rdx = ft_get_radix(base)))
		return;
	if (nb >= rdx || nb <= -rdx)
		ft_putnbr_base(nb / rdx, base);
	if (nb < 0 && nb > -rdx)
		ft_putchar('-');
	if (nb >= 0)
		ft_putchar(base[nb % rdx]);
	else
		ft_putchar(base[-(nb % rdx)]);
}

int    main(void)
{
	ft_putnbr_base(-25504242, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(255, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-255, "01");
	write(1, "\n", 1);
	ft_putnbr_base(255, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-198, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(255, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(-198, "+01");
	write(1, "\n", 1);
	ft_putnbr_base(198, "");
	write(1, "\n", 1);
	return (0);
}

/* First version */

// void    ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int    ft_checkbase(char *base)
// {
// 	if (strcmp(base, "0123456789") == 0 || 
// 		strcmp(base, "01") == 0 ||
// 		strcmp(base, "0123456789ABCDEF") == 0 ||
// 		strcmp(base, "poneyvif") == 0)
// 	{
// 		return (1);
// 	}
// 	return (0);
// }

// int    ft_man_negatives(int num)
// {
// 	if (num < 0)
// 	{
// 		write(1, "-", 1);
// 		return (-num);
// 	}
// 	return (num);
// }

// void    ft_putnbr_base(int nbr, char *base)
// {
// 	int    radix;

// 	if (!ft_checkbase(base))
// 		return;
// 	nbr = ft_man_negatives(nbr);
// 	radix = (int)strlen(base);
// 	if (nbr >= radix)
// 		ft_putnbr_base(nbr / radix, base);
// 	ft_putchar(base[nbr % radix]);
// }