#include <stdio.h>

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

int    main(void)
{
	char    *src = "suuuure boomer.";
	char    dest0[100] = "";
	char    dest1[] = ""; 
	char    *dest2 = ""; // Can't modify a str litteral...

	printf("src = %s\n", src);
	printf("dest0 = %s\n", ft_strcpy(dest0, src));
	printf("dest1 = %s\n", ft_strcpy(dest1, src)); // HOW ?
	printf("dest2 = %s\n", ft_strcpy(dest2, src)); // Segfault
}

// char	*ft_strcpy(char *dest, char *src)
// {
// 	char	*bf;

// 	bf = dest;
// 	while ((*bf++ = *src++)); // Playing with fire...
// 	return (dest);
// }
