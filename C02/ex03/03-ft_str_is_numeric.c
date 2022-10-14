#include <stdio.h>

int    ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int    main(void)
{
	printf("\"%s\" is numeric = %i\n", "abcd", ft_str_is_numeric("abcd"));
	printf("\"%s\" is numeric = %i\n", "010198", ft_str_is_numeric("010198"));
	printf("\"%s\" is numeric = %i\n", "010a98", ft_str_is_numeric("010a98"));
	printf("\"%s\" is numeric = %i\n", "", ft_str_is_numeric(""));
}