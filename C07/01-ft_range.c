#include <stdlib.h>
#include <stdio.h>


int    *ft_range(int min, int max)
{
	int    *range;
	int    i;

	if (min >= max) 
		return NULL;
	if (!(range = (int *)malloc((max - min) * sizeof(int)))) //🥵
		return range;
	i = 0;
	while (min + i < max)
	{
		range[i] = min + i; 
		i++;
	}
	return range;
}

int    main(void)
{
	int    *range;

	if (!(range = ft_range(1, -300)))
		range = ft_range(1, 100);

	while(*(range))
	{
		printf("%i\n", *(range));
		range++;
	}
	return (0);
}