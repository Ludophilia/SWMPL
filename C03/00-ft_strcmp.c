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

int    ft_strcmp(char *s1, char *s2)
{
	int    len_s1;
	int    len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (len_s1 > len_s2)
		return (1);
	else if (len_s1 < len_s2)
		return (-1);
	return (0);
}

int    main(void)
{
	printf("%i\n", ft_strcmp("", "l"));
	printf("%i\n", ft_strcmp("l", ""));
	printf("%i\n\n", ft_strcmp("", ""));
	
	printf("%i\n", ft_strcmp("", "l"));
	printf("%i\n", ft_strcmp("l", ""));
	printf("%i\n\n", ft_strcmp("", ""));
}