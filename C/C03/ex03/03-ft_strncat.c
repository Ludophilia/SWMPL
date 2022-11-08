#include <stdio.h>

int    ft_strlen(char *str)
{
	int    len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}

char    *ft_strcat(char *dest, char *src, unsigned int nb)
{
	int    i;
	int    j;

	i = ft_strlen(dest);
	j = 0;
	while (j < nb && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int    main(void)
{
	char    *src = " world !!";
	char    dest[50] = "hello";
	char    *src1 = " world !!";
	char    dest1[2] = "hello";

	printf("%s\n", ft_strcat(dest, src, 4));
	printf("%s\n", ft_strcat(dest1, src1, 4));
}