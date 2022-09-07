#include <stdio.h>
#include <stdlib.h>

int    ft_strlen(char *str)
{
	int    len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}

char    *ft_strdup(char *src)
{
	char    *dest;
	int     i;
	
	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';
	return (dest);
}

int    main(void)
{
	char    *ole_str;
	char    *new_str;

	ole_str = "12345678901234567890";
	new_str = ft_strdup(ole_str);
	printf("ole_str: %s | addr: %p\n", ole_str, ole_str);
	printf("new_str: %s | addr: %p\n", new_str, new_str);
}

/* Last attempts... */

// char    *ft_strdup(char *src) // ET LES CORRECTIONS ???
// {
// 	char    *dest;
// 	int    i;
	
// 	dest = (char *)malloc(sizeof(src));
// 	if (!dest)
// 		return NULL;
// 	// dest = src; // NO, they'll share the same address!
// 	i = 0;
// 	while (*(src + i)) 
// 	{
// 		// printf("(src)%p/(dest)%p\n", src + i, dest + i);
// 		*(dest + i) = *(src + i); /* Beware not to increment the heap pointer, 
// 		otherwise you'll lose track of the initial pos of your dest string */
// 		i += 1;
// 	}
// 	*(dest + i + 1) = '\0'; 
// 	return dest;
// }