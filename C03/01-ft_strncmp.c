#include <stdio.h>
#include <string.h>

int    ft_strnlen(char *str, unsigned int lim)
{
	int    len;

	len = 0;
	while (len < lim && *(str + len))
		len++;
	return (len);
}

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int    len_s1;
	int    len_s2;

	len_s1 = ft_strnlen(s1, n);
	len_s2 = ft_strnlen(s2, n);
	if (len_s1 > len_s2)
		return (1);
	else if (len_s1 < len_s2)
		return (-1);
	return (0);
}

int    main(void)
{
	printf("%i\n", ft_strncmp("label", "labelisation", 4));
	printf("%i\n", ft_strncmp("labelisation", "label", 4));
	printf("%i\n\n", ft_strncmp("", "", 5));

	printf("%i\n", strncmp("label", "labelisation", 4));
	printf("%i\n", strncmp("labelisation", "label", 4));
	printf("%i\n", strncmp("", "", 5));
}