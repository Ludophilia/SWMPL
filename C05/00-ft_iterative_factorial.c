#include <stdio.h>

int    ft_iterative_factorial(int nb)
{
	int    i;

	i = nb;
	if (nb < 0)
	{	
		nb = 0;
		printf("nb: %i\n", nb);
		return (nb);
	}
	else if (nb == 0 || nb == 1)
	{
		nb = 1;
		printf("nb: %i\n", nb);
		return (nb);
	}
	while (i > 1)
	{
		i--;
		nb *= i;
	}
	printf("nb: %i\n", nb);
	return (nb);
}

int    main(void)
{
	ft_iterative_factorial("des"); // 0
	ft_iterative_factorial("\n"); // 0
	ft_iterative_factorial(-100); // 0
	ft_iterative_factorial(0); // 1
	ft_iterative_factorial(1); // 1
	ft_iterative_factorial(10); // 10*9*8...1.
	ft_iterative_factorial(13); // 10*9*8...1.
}