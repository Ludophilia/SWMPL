#include <stdio.h>

int    ft_sqrt(int nb)
{
	int    sqrt;

	sqrt = 0;
	if (nb < 0)
		return (0);
	while (sqrt * sqrt <= nb)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}

int    main(void)
{
	printf("sqrt(-3)) = %i\n", ft_sqrt(-3));
	printf("sqrt(0)) = %i\n", ft_sqrt(0));
	printf("sqrt(25) = %i\n", ft_sqrt(25));
	printf("sqrt(36) = %i\n", ft_sqrt(36));
	printf("sqrt(625)) = %i\n", ft_sqrt(625)); // 25
	printf("sqrt(62500)) = %i\n", ft_sqrt(62500)); // 250
}

/* Previous attempts... */

// int    ft_sqrt(int nb)
// {
// 	int    pot_sqrt;

// 	if (nb < 0)
// 		return (0);
// 	pot_sqrt = nb;
// 	while (pot_sqrt)
// 	{
// 		if (pot_sqrt * pot_sqrt == nb)
// 			return (pot_sqrt);
// 		pot_sqrt -= 1;
// 	}
// 	return (0);
// }
