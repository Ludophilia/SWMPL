#include <stdio.h>

char    *ft_strlowcase(char *str)
{
	int    i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += ('a'-'A');
		i++;
	}
	return (str);
}

int    main(void)
{
	/* This ex is limited to the printable characters of the ASCII
	standard. Special characters like ÈÀÇÉ are not printable or 
	does not EVEN exist in ASCII.*/
	char    str[] = "T'AIMES LA LITTERATURE ? HEIN ??";

	printf("%s\n", ft_strlowcase(str));
}