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

int    main(void)
{
	printf("len = %i\n", ft_strlen(""));
	printf("len = %lu\n\n", strlen(""));
	printf("len = %i\n", ft_strlen("ban"));
	printf("len = %lu\n\n", strlen("ban"));
	printf("len = %i\n", ft_strlen("42_piscine_09_22")); // 16
	printf("len = %lu\n\n", strlen("42_piscine_09_22")); // 16
}
