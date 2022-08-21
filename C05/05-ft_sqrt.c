#include <stdio.h>


/* sqrt(nb) is the number that is multiplied by itself to give nb 
ex :  sqrt(4) = 2 and 2 * 2 = 4.
We are looking for an integer...
*/

int    ft_sqrt(int nb)
{
	int    pot_sqrt;

	if (nb < 0)
		return (0);
	pot_sqrt = nb;
	while (pot_sqrt)
	{
		if (pot_sqrt * pot_sqrt == nb)
			return (pot_sqrt);
		pot_sqrt -= 1;
	}
	return (0);
}

int    main(void)
{
	printf("sqrt(25) = %i\n", ft_sqrt(25));
	printf("sqrt(36) = %i\n", ft_sqrt(36));
	printf("sqrt(0)) = %i\n", ft_sqrt(0));
	printf("sqrt(-3)) = %i\n", ft_sqrt(-3));
	printf("sqrt(625)) = %i\n", ft_sqrt(625)); // 25
}

