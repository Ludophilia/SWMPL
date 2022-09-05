#include <stdio.h>

int    ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	return nb * ft_recursive_factorial(nb - 1);
}

int    main(void)
{
	int    n[] = { -100, 0, 1, 10, 13 };
	int    i;

	i = 0;
	while (i < sizeof(n)/sizeof(n[0]))
	{
		printf("%i\n", ft_recursive_factorial(n[i])); 
		i++;
	}
}