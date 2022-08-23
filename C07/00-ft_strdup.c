#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char    *dest;
	int    i;
	
	dest = (char *)malloc(sizeof(src));
	if (!dest)
		return NULL;
	// dest = src; // NO, they'll share the same address!
	i = 0;
	while (*(src + i)) 
	{
		// printf("(src)%p/(dest)%p\n", src + i, dest + i);
		*(dest + i) = *(src + i); /* Beware not to increment the heap pointer, 
		otherwise you'll lose track of the initial pos of your dest string */
		i += 1;
	}
	return dest;
}

int    main(void)
{
	char    *ole_str;
	char    *new_str;

	ole_str = "12345678901234567890";
	// new_str = strdup(ole_str);
	new_str = ft_strdup(ole_str);

	printf("ole_str: %s | addr: %p\n", ole_str, ole_str);
	printf("new_str: %s | addr: %p\n", new_str, new_str);
}