#include <stdio.h>

int    ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

int    main(void)
{
	printf("\"%s\" is lowercase = %i\n", 
		"abcd", ft_str_is_lowercase("abcd"));
	printf("\"%s\" is lowercase = %i\n", 
		"abCDef", ft_str_is_lowercase("abCDef"));
	printf("\"%s\" is lowercase = %i\n", 
		"CDef01", ft_str_is_lowercase("CDef01"));
	printf("\"%s\" is lowercase = %i\n", 
		"", ft_str_is_lowercase(""));
}