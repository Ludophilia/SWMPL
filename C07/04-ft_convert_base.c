#include <stdio.h>
#include <stdlib.h>

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

int    ft_find(char c, char *base)
{
	int    i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

long    ft_atoi_base(char *str, char *base)
{
	int    i;
	int    s;
	int    rdx;
	long    res;

	if (!(rdx = ft_get_radix(base)))
		return (-2147483648 - 1);
	i = 0;
	s = 1;
	res = 0;
	while (str[i])
	{
		if (str[i] == '-')
			s *= -1;
		if (ft_find(str[i], base) >= 0)
			res = res * rdx + ft_find(str[i], base);
		if (res > 0 && !(ft_find(str[i + 1], base) >= 0))
			return (s * res);
		i++;
	}
	return (-2147483648 - 1);
}

int    ft_intlen(int nbr)
{
	int    i;

	i = 0;
	if (nbr < 0)
		i++;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char    *ft_putchar(char c, char *dest)
{
	*dest = c;
	dest++;
	return (dest);
}

char    *ft_putnbr_base(int nb, char *base, char *dest)
{
	int    rdx;

	if (!(rdx = ft_get_radix(base)))
		return (NULL);
	if (nb >= rdx || nb <= -rdx)
		dest = ft_putnbr_base(nb / rdx, base, dest);
	if (nb < 0 && nb > -rdx)
		dest = ft_putchar('-', dest);
	if (nb >= 0)
		dest = ft_putchar(base[nb % rdx], dest);
	else
		dest = ft_putchar(base[-(nb % rdx)], dest);
	return (dest);
}

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long    nbr_int;
	char    *str;
	char    *entrypoint;

	nbr_int = ft_atoi_base(nbr, base_from);
	if (nbr_int < -2147483648 || nbr_int > 2147483647)
		return (NULL);
	if (!(str = malloc((ft_intlen(nbr_int) + 1) * sizeof(char))))
		return (NULL);
	entrypoint = str;
	str = ft_putnbr_base(nbr_int, base_to, str);
	*str = '\0';
	return (entrypoint);
}

int    main(int argc, char **argv)
{
	printf("RES: %s\n", ft_convert_base(" ---2147483650XOXOXOX_kawaiisugi:)", 
		"0123456789", "0123456789"));
	printf("RES: %s\n", ft_convert_base(" --- vn  OH MY GOD^^", 
	"poneyvifetsympa", "0123456789"));
	printf("RES: %s\n", ft_convert_base(" ---21474:)", 
		"0123456789", "0123456789"));
	printf("RES: %s\n", ft_convert_base(" --42edfrc", 
		"0123456789", "01"));
	printf("RES: %s\n", ft_convert_base(" ---101010uwuwu^^",
		"01", "0123456789"));
	printf("RES: %s\n", ft_convert_base("@@@@AFDEpisc22",
		"0123456789ABCDEF", "0123456789"));
	printf("RES: %s\n", ft_convert_base("----45022_X22",
		"0123456789", "0123456789ABCDEF"));
	printf("RES: %s\n", ft_convert_base(" --42edfrc", 
		"0123456789", "poneyvif"));
	printf("RES: %s\n", ft_convert_base(" -- vn  OH MY GOD^^", 
		"poneyvif", "0123456789"));
}