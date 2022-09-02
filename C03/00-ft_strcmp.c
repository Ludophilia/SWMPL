#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
	int    i;
	
	i = 0;
	while (s1[i] || s2[i])
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
	printf("R : %i\n", ft_strcmp("on", "in"));
	printf("R: %i\n", ft_strcmp("hello", "olleh"));
	printf("R: %i\n", ft_strcmp("hello", "hello"));
	printf("R: %i\n", ft_strcmp("hell", "hello"));
	printf("R: %i\n", ft_strcmp("hello", "hell"));
	printf("R: %i\n\n", ft_strcmp("", ""));
	
	printf("R: %i\n", strcmp("on", "in"));
	printf("R: %i\n", strcmp("hello", "olleh"));
	printf("R: %i\n", strcmp("hello", "hello"));
	printf("R: %i\n", strcmp("hell", "hello"));
	printf("R: %i\n", strcmp("hello", "hell"));
	printf("R: %i\n", strcmp("", ""));
}

/* Two attempts, failed to understand what was supposed to do strcmp 
exactly... below lies my mistakes (✝)... */

// int    ft_strlen(char *str)
// {
// 	int    len;

// 	len = 0;
// 	while (*(str + len))
// 		len++;
// 	return (len);
// }

// int    ft_strcmp(char *s1, char *s2)
// {
// 	int    len_s1;
// 	int    len_s2;

// 	len_s1 = ft_strlen(s1);
// 	len_s2 = ft_strlen(s2);
// 	if (len_s1 > len_s2)
// 		return (1);
// 	else if (len_s1 < len_s2)
// 		return (-1);
// 	return (0);
// }

// int    ft_strcmp(char *s1, char *s2)
// {
// 	int    i;
// 	int    j;
// 	int    m;

// 	i = 0;
// 	j = 0;
// 	m = 0;
// 	while (s1[i] || s2[j])
// 	{
// 		if (s1[i] == s2[j])
// 			m++;
// 		if (s1[i])
// 			i++;
// 		if (s2[j])
// 			j++;
// 	}
// 	if ((i == m) && (j == m))
// 		return (0);
// 	else if (i > j)
// 		return (1);
// 	else
// 		return (-1);
// }

// int    ft_strcmp(char *s1, char *s2)
// {
// 	int    i;
	
// 	i = 0;
// 	while (s1[i] && (s1[i] == s2[i]))
// 		i++;
// 	if (s1[i] > s2[i])
// 		return (1);
// 	else if (s1[i] < s2[i])
// 		return (-1);
// 	return (0);
// }