#include <stdio.h>

int    ft_atoi(char *str)
{
	int    i;
	int    sign;
	int    res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i])
	{
		if (str[i] == '-')
			sign *= -1;
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i] - '0');
		if (res > 0 && !(str[i + 1] >= '0' && str[i + 1] <= '9'))
			return (sign * res);
		i++;
	}
	return (0);
}

int    main(void)
{
	char    *str1 = "     ---+--+1234ab567";
	char    *str2 = " ---+---+42244223ab567";
	char    *str3 = " ----+--+sorewaiminaibundesu";

	printf("%i\n", ft_atoi(str1));
	printf("%i\n", ft_atoi(str2));
	printf("%i\n", ft_atoi(str3));
}

/* My first try - functional but overly complex... */

// int    ft_strlen(char *str)
// {
// 	int    len;

// 	len = 0;
// 	while (*(str + len))
// 		len++;
// 	return (len);
// }

// int    ft_scan_nbr(char *src, char *nbr)
// {
// 	int    i;
// 	int    j;
// 	int    m;

// 	m = 0;
// 	i = 0;
// 	j = 1;
// 	while (src[i])
// 	{
// 		if (src[i] == '-')
// 			m += 1;
// 		if (src[i] >= '0' && src[i] <= '9')
// 		{
// 			nbr[j] = src[i];
// 			j++;
// 			if (!(src[i + 1] >= '0' && src[i + 1] <= '9'))
// 			{
// 				if (m % 2 == 1)
// 					nbr[0] = '-';
// 				else
// 					nbr[0] = '+';
// 				nbr[j] = '\0';
// 				return (1);
// 			}
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// int    ft_atoi(char *str)
// {
// 	char    nbr[10];
// 	int    i;
// 	int    j;
// 	int    res;
// 	int    pow;

// 	if (!ft_scan_nbr(str, nbr))
// 		return (0);
// 	i = 1;
// 	res = 0;
// 	while (i < ft_strlen(nbr))
// 	{
// 		j = ft_strlen(nbr) - 1 - i;
// 		pow = 1;
// 		while (j > 0)
// 		{
// 			pow *= 10;
// 			j--;
// 		}
// 		res += (nbr[i] - '0') * pow;
// 		i++;
// 	}
// 	if (nbr[0] == '-')
// 		res *= -1;
// 	return (res);
// }

/* My inspiration (modified by me)... Cheers to him/her, quite clever way 
to solve that problem ! */

// int	ft_atoi(char *str)
// {
// 	int	sign;
// 	int	num;

// 	sign = 1;
// 	num = 0;
// 	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
// 		|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
// 		str++;
// 	while ((*str == '-') || (*str == '+'))
// 	{
// 		if (*str == '-')
// 			sign *= -1;
// 		str++;
// 	}
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		num = (num * 10) + (*str - '0');
// 		// 0 * 10 + (1) = 1
// 		// 1 * 10 + (2) = 12
// 		// 12 * 10 + (3) = 123
// 		// 123 * 10 + (4) = 1234
// 		str++;
// 	}
// 	return (num * (sign));
// }