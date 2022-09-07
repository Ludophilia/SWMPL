#include <stdio.h>
#include <stdlib.h>

int    ft_strlen(char *str)
{
	int    l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

int    ft_sprlen(char **strs, char *sep)
{
	int    i;
	int    l;

	i = 0;
	l = 0;
	while (strs[i])
	{
		l += ft_strlen(strs[i]);
		i++;
	}
	l += i * ft_strlen(sep);
	return (l);
}

char    *ft_strcat(char *dest, char *src)
{
	int    i;
	int    j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
	char    *str;
	int    i;

	if (!(str = malloc((ft_sprlen(strs, sep) + 1) * sizeof(char))))
		return (str);
	if (size == 0)
		return (str);
	i = 0;
	while (strs[i])
	{
		str = ft_strcat(str, strs[i]);
		if (i < (size - 1))
			str = ft_strcat(str, sep);
		i++;
	}	
	return (str);
}

int    main(void)
{
	char    **strs;
	char    *str1;
	char    *str2;
	char    *str3;

	strs = (char **)malloc(3 * sizeof(char *));
	str1 = "anananas";
	str2 = "bananas";
	str3 = "cherries";
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;

	printf("%s\n", ft_strjoin(3, strs, "\n"));
	printf("%s\n", ft_strjoin(0, strs, " "));
}

/* Previous attempts... Some of them are working of course! */

// while (i < 50) /* EXPLORE THIS, SOMETHING IS WRONG. CHECKING 
// *(c_str + i) is unsafe when the space has been allocated by malloc. It 
// seems that there is random values (incl 0 or null) in those memory spot...
// So checking against NULL in this situation like this *(c_str + i) is a bad 
// idea... */
// {
// 	printf("free memory spot #%i\n", i);
// 	*(c_str + i) = '0' + i;
// 	printf("*(c_str + %i) = %c\n", i, *(c_str + i));
// 	i += 1;
// }
// i = 0;

// int    ft_sprlen(char **strs, char *sep)
// {
// 	int    i;
// 	int    j;
// 	int    l;

// 	i = 0;
// 	l = 0;
// 	while (strs[i])
// 	{
// 		j = 0;
// 		while (strs[i][j])
// 			j++;
// 		i++;
// 		l += j;
// 	}
// 	j = 0;
// 	while (sep[j])
// 		j++;
// 	l += i * j;
// 	return (l);
// }

// /* build it with cat... Why not try it ? */

// char    *ft_build_str_from_strs(char *str, char **strs, int size, char *sep)
// {
// 	int    i;
// 	int    j;
// 	int    k;

// 	i = 0;
// 	k = 0;
// 	while (strs[i])
// 	{
// 		j = 0;
// 		while (strs[i][j])
// 		{
// 			str[k] = strs[i][j];
// 			k++;
// 			j++;
// 		}
// 		j = 0;
// 		while (sep[j] && i < (size - 1))
// 		{
// 			str[k] = sep[j];
// 			k++;
// 			j++;
// 		}
// 		i++;
// 	}
// 	str[k] = '\0';
// 	return (str);
// }

// char    *ft_strjoin(int size, char **strs, char *sep)
// {
// 	char    *str;
// 	int    i;
// 	int    j;
// 	int    k;

// 	if (!(str = malloc((ft_sprlen(strs, sep) + 1) * sizeof(char))))
// 		return (str);
// 	if (size == 0)
// 		return (str);
// 	str = ft_build_str_from_strs(str, strs, size, sep);
// 	return (str);
// }