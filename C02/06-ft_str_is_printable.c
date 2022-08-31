#include <stdio.h>

int    ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

int    main(void)
{
	printf("\"%s\" is printable = %i\n", 
		"DELEVERYTHING", ft_str_is_printable("DELEVERYTHING"));
	printf("\"%s\" is printable = %i\n", 
		"abCDef\\n", ft_str_is_printable("abCDef\n"));
	printf("\"%s\" is printable = %i\n", 
		"", ft_str_is_printable(""));
}