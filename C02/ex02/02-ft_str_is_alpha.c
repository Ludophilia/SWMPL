#include <stdio.h>

int    ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

int    main(void)
{
	printf("\"%s\" is alpha = %i\n", "abcd", ft_str_is_alpha("abcd"));
	printf("\"%s\" is alpha = %i\n", "ab01cd", ft_str_is_alpha("ab01cd"));
	printf("\"%s\" is alpha = %i\n", "", ft_str_is_alpha(""));
}