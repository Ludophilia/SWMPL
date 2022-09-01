#include <stdio.h>
#include <string.h>

int    ft_strlen(char *str)
{
	int    len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}

char    *ft_strstr(char *str, char *to_find)
{
	int    i;
	int    j;
	int    pos;

	if (!ft_strlen(to_find))
		return str;
	i = 0;
	j = 0;
	pos = 0;
	while (str[i])
	{
		if ((str[i] == to_find[j]) && to_find[j])
		{
			pos = i;
			while ((str[i] == to_find[j]) && to_find[j])
			{
				i++;
				j++;
			}
			if (!to_find[j])
				return (str + pos);
		}
		i++;
	}
	return NULL;
}

int    main(void)
{
	printf("%s\n", ft_strstr("hello", ""));
	printf("%s\n", ft_strstr("hello", "ello"));
	printf("%s\n", ft_strstr("hello", "elloi"));
	printf("%s\n\n", ft_strstr("hello", "amazones"));

	printf("%s\n", strstr("hello", ""));
	printf("%s\n", strstr("hello", "ello"));
	printf("%s\n", strstr("hello", "elloi"));
	printf("%s\n", strstr("hello", "amazones"));
}