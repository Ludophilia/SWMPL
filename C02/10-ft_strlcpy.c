#include <stdio.h>
#include <string.h>

int    ft_strlen(char *str)
{
	int    len;

	len = 0;
	while (*(str + len))
	{
		len++;
	}
	return (len);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int    i;

	if (size == 0)
		return (0);
	i = 0;
	while ((i < (size - 1)) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int    main(void)
{
	char    *src = "suuuure boomer.";
	char    dest1[50] = ""; 

	printf("src \"%s\" len = %i\n", src, ft_strlen(src));
	printf("dest1 \"%s\" len = %i\n", dest1,
		ft_strlcpy(dest1, src, ft_strlen(src) + 1));
	// printf("dest1 \"%s\" len = %lu\n", dest1,
	// 	strlcpy(dest1, src, strlen(src) + 1));
}