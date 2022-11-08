#include "04-ft_stock_str.h"

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

char    *ft_strcpy(char *dest, char *src)
{
	int    i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
