#include <stdio.h>

int    ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	return nb * ft_recursive_factorial(nb - 1);
}

int    main(void)
{
	//printf("r = %i\n", ft_recursive_factorial("des"));
	//printf("r = %i\n", ft_recursive_factorial("\n"));
	printf("r = %i\n", ft_recursive_factorial(-100));
	printf("r = %i\n", ft_recursive_factorial(0));
	printf("r = %i\n", ft_recursive_factorial(1));
	printf("r = %i\n", ft_recursive_factorial(10));
	printf("r = %i\n", ft_recursive_factorial(13));
}