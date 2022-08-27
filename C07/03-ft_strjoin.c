#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t    ft_strslen(int size, char **strs, char *sep)
{
	size_t    tt_size;

	if (size <= 0)
		return (0);
	tt_size = 0;
	while (*strs)
	{
		tt_size += strlen(*strs);
		strs += 1;
	}
	tt_size += 1 + (size - 1) * strlen(sep);
	return (tt_size); 
}

void    ft_build_str(char *newstr, char **strs, int size, char *sep)
{
	int    i;
	int    j;
	int    k;

	i = 0;	
	k = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			newstr[k] = strs[i][j];
			k += 1;
			j += 1;
		}
		j = 0;
		while (sep[j] && i < (size - 1))
		{
			newstr[k] = sep[j];
			k += 1;
			j += 1;
		}
		i += 1;
	}
	k += 1;
	newstr[k] = '\0';
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
	char    *newstr;

	if (!(newstr = (char *)malloc(ft_strslen(size, strs, sep))))
		return (NULL);
	if (size == 0)
		return (newstr);
	ft_build_str(newstr, strs, size, sep);
	return (newstr);
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
	printf("%s\n", ft_strjoin(3, strs, " "));
	printf("%s\n", ft_strjoin(0, strs, " "));
}

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
