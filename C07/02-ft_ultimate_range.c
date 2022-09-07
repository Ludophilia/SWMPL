#include <stdio.h>
#include <stdlib.h>

void    ft_print_range(int **range, int size)
{
	/* Created to inspect the array pointed by range as I don't know how to
	access range from ft_ultimate_range from the outside... */
	int    i;
	
	i = 0;
	while (i < size)
	{
		printf("%i\n", range[0][i]);
		i += 1;
	}
}

int    ft_ultimate_range(int **range, int min, int max)
{
	int    *subrange;
	int    i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!(subrange = (int*)malloc((max - min) * sizeof(int))))
	{
		range = &subrange;
		return (-1);
	}
	i = 0;
	while (min + i < max)
	{
		subrange[i] = min + i;
		i++;
	}
	range = &subrange;
	ft_print_range(range, i);
	return (i);
}

int    main(int argc, char **argv)
{
	int    **range;
	int    min;
	int    max;
	int    size;
	int    i;

	min = atoi(*(argv + 1));
	max = atoi(*(argv + 2));
	i = 0;
	if (!(ft_ultimate_range(range, 1, -300)))
		printf("This should have failed as expected.\n");
	if ((size = ft_ultimate_range(range, min, max)))
	{
		printf("arr size: %i\n", size);
		return (0);
	}
	return (1);
}