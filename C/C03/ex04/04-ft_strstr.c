#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
	int    i;
	int    j;

	i = 0;
	j = 0;
	if (!*to_find)
		return str;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
				return (str + i);
			j++;
		}
		i++;
	}
	return NULL;
}

int    main(void)
{
	printf("%s\n", ft_strstr("hello", ""));
	printf("%s\n\n", strstr("hello", ""));
	printf("%s\n", ft_strstr("hello", "elloi"));
	printf("%s\n\n", strstr("hello", "elloi"));
	printf("%s\n", ft_strstr("hello", "ello"));
	printf("%s\n\n", strstr("hello", "ello"));
	printf("%s\n", ft_strstr("hella", "amazones"));
	printf("%s\n\n", strstr("hella", "amazones"));
}