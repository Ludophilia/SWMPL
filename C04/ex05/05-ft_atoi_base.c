#include <stdio.h>

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

int    ft_atoi_base(char *str, char *base)
{
	int    i;
	int    s;
	int    rdx;
	int    res;

	if (!(rdx = ft_get_radix(base)))
		return (0);
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
	return (0);
}

int    main(void)
{
	printf("R: %i\n", ft_atoi_base("     ---+--+1234ab567", 
	"0123456789"));
	printf("R: %i\n", ft_atoi_base(" ---42edfrc", 
	"0123456789"));
	printf("R: %i\n", ft_atoi_base(" --+---+1111ab567", 
	"01"));
	printf("R: %i\n", ft_atoi_base(" --0101010uwuwu^^", 
	"01"));
	printf("R: %i\n", ft_atoi_base(" ---+---+AFab5sssugoi", 
	"0123456789ABCDEF"));
	printf("R: %i\n", ft_atoi_base(" ---+---+effabsozne---00", 
	"poneyvif"));
	printf("R: %i\n", ft_atoi_base(" ----+--+sorewaiminaibundesu", 
	"blablacar"));
}