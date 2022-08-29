#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
	int    i;
	int    bf;

	i = 0;
	while (i < size/2)
	{
		bf = *(tab + i);
		*(tab + i) = *(tab + (size - 1 - i));
		*(tab + (size - 1 - i)) = bf;
		i++;
	}
}

int    main(void)
{
	int    tab[] = { 0, 1, 2, 3, 4, 5, 6 };
	int    size_tab;
	int    i;

	i = 0;
	size_tab = sizeof(tab) / sizeof(*tab);
	ft_rev_int_tab(tab, size_tab);
	while (i < size_tab)
	{
		printf("%i\n", *(tab + i));
		i++;
	}
}