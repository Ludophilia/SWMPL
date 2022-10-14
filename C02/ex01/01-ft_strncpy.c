#include <stdio.h>

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

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int    i;

	i = 0;
	while (i < n)
	{	
		if (*(src + i))
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

int    main(void)
{
	char    dest[30];
	char    *src = "sure boomer.";

	printf("src = %s\n", src);
	printf("des = %s\n", ft_strncpy(dest, src, 3));
	printf("des = %s\n", ft_strncpy(dest, src, ft_strlen(src)));
	printf("des = %s\n", ft_strncpy(dest, src, ft_strlen(src) + 3));
}