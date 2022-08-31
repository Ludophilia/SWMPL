#include <stdio.h>

int    ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

int    main(void)
{
	printf("\"%s\" is uppercase = %i\n", 
		"DELEVERYTHING", ft_str_is_uppercase("DELEVERYTHING"));
	printf("\"%s\" is uppercase = %i\n", 
		"abCDef", ft_str_is_uppercase("abCDef"));
	printf("\"%s\" is uppercase = %i\n", 
		"CDef01", ft_str_is_uppercase("CDef01"));
	printf("\"%s\" is uppercase = %i\n", 
		"", ft_str_is_uppercase(""));
}