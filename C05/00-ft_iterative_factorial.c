#include <stdio.h>

int    ft_iterative_factorial(int nb)
{
	int    i;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	i = nb;
	while (i-- > 1)
		nb *= i;
	return (nb);
}

int    main(void)
{
	int    n[] = { -100, 0, 1, 10, 13 };
	int    i;

	i = 0;
	while (i < sizeof(n)/sizeof(n[0]))
	{
		printf("%i\n", ft_iterative_factorial(n[i])); 
		i++;
	}
}