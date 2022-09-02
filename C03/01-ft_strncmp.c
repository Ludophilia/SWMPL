#include <stdio.h>
#include <string.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int    i;
	
	i = 0;
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

int    main(void)
{
	printf("R: %i\n", ft_strncmp("on", "in", 2));
	printf("R: %i\n", ft_strncmp("hello", "hello", 4));
	printf("R: %i\n", ft_strncmp("label", "labelisation", 4));
	printf("R: %i\n", ft_strncmp("label", "labelisation", 8));
	printf("R: %i\n", ft_strncmp("labelisation", "label", 4));
	printf("R: %i\n\n", ft_strncmp("", "", 5));

	printf("R: %i\n", strncmp("on", "in", 2));
	printf("R: %i\n", strncmp("hello", "hello", 4));
	printf("R: %i\n", strncmp("label", "labelisation", 4));
	printf("R: %i\n", strncmp("label", "labelisation", 8));
	printf("R: %i\n", strncmp("labelisation", "label", 4));
	printf("R: %i\n", strncmp("", "", 5));
}

/* Two attempts, failed to understand what was supposed to do strcmp 
exactly... below lies my mistakes (✝)... */

// int    ft_strnlen(char *str, unsigned int lim)
// {
// 	int    len;

// 	len = 0;
// 	while (len < lim && *(str + len))
// 		len++;
// 	return (len);
// }

// int    ft_strncmp(char *s1, char *s2, unsigned int n)
// {
// 	int    len_s1;
// 	int    len_s2;

// 	len_s1 = ft_strnlen(s1, n);
// 	len_s2 = ft_strnlen(s2, n);
// 	if (len_s1 > len_s2)
// 		return (1);
// 	else if (len_s1 < len_s2)
// 		return (-1);
// 	return (0);
// }

// int    ft_strncmp(char *s1, char *s2, unsigned int n)
// {
// 	int    i;
	
// 	i = 0;
// 	while ((i < n) && (s1[i] == s2[i]))
// 		i++;
// 	if (s1[i] > s2[i])
// 		return (1);
// 	else if (s1[i] < s2[i])
// 		return (-1);
// 	return (0);
// }