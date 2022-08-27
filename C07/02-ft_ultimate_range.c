#include <stdio.h>
#include <stdlib.h>

void    ft_print_range(int *range, int count)
{
	int    i;
	
	i = 0;
	while(count)
	{
		printf("%i\n", *(range + i));
		i += 1;
		count -= 1;
	}
}

int    ft_ultimate_range(int **range, int min, int max)
{
	int    i;
	int    *arr;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!(arr = (int*)malloc((max - min) * sizeof(int))))
	{
		range = &arr;
		return (-1);
	}
	i = 0;
	range = &arr;
	while (i < (max - min))
	{
		arr[i] = min + i;
		i += 1;
	}
	ft_print_range(arr, i);
	return (i);
}

int    main(int argc, char **argv)
{
	int    **range;
	int    min;
	int    max;
	int    size;

	min = atoi(*(argv + 1));
	max = atoi(*(argv + 2));
	if (!(ft_ultimate_range(range, 1, -300)))
		printf("This should have failed as expected.\n");

	// if (ft_ultimate_range(range, 1, 100) == -1)
	// 	printf("Memory allocation went wrongue.\n");
	// 	return (1);
	// free(*range);
	if ((size = ft_ultimate_range(range, min, max)))
	{
		printf("arr size: %i\n", size);
		return (0);
	}
	return (1);
}
