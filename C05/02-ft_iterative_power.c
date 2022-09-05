#include <stdio.h>

int    ft_iterative_power(int nb, int power)
{
	int    nb_sign;
	int    pow_sign;
	
	nb_sign = 1;
	pow_sign = 1;
	if (!power)
		return (1);
	if (nb < 0 && power % 2 == 0)
		nb_sign *= -1;
	if (power < 0)
		pow_sign *= -1;
	while (--power > 0)
		nb *= nb;
	if (pow_sign == -1)
		return 1/(nb * nb_sign);
	return (nb * nb_sign);
}

int    main(void)
{
	printf("-1**2 = %i\n", ft_iterative_power(-1, 2));
	printf("-1**3 = %i\n", ft_iterative_power(-1, 3));
	printf("-2^-2 = %i\n", ft_iterative_power(-2, -2));
	printf("-10^-2 = %i\n", ft_iterative_power(-10, -2));
	printf("O**0 = %i\n", ft_iterative_power(0, 0));
	printf("3**0 = %i\n", ft_iterative_power(3, 0));
	printf("2**1 = %i\n", ft_iterative_power(2, 1));
	printf("2**2 = %i\n", ft_iterative_power(2, 2));
	printf("2^-2 = %i\n", ft_iterative_power(2, -2));
	printf("10^-2 = %i\n", ft_iterative_power(10, -2));
}
