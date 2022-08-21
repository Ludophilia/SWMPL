#include <stdio.h>

int    ft_recursive_power(int nb, int power)
{	
	int    next_nb;

	if (power == 0)
		return 1;
	if (nb < 0)
		next_nb = -nb;
	else
		next_nb = nb;
	if (power == -1)
		return  1 / (nb * ft_recursive_power(next_nb, power + 1));
	else if (power < -1)
		return nb * ft_recursive_power(next_nb, power + 1);
	return nb * ft_recursive_power(next_nb, power - 1);
}

int    main(void)
{
	printf("2^-2 = %i\n", ft_recursive_power(2, -2));
	printf("10^-2 = %i\n", ft_recursive_power(10, -2));
	printf("2^1 = %i\n", ft_recursive_power(2, 1));
	printf("-1**2 = %i\n", ft_recursive_power(-1, 2));
	printf("-1**3 = %i\n", ft_recursive_power(-1, 3));
	printf("O**0 = %i\n", ft_recursive_power(0, 0));
	printf("3**0 = %i\n", ft_recursive_power(3, 0));
	printf("2**2 = %i\n", ft_recursive_power(2, 2));
}

// int    ft_recursive_power(int nb, int power)
// {	
// 	if (power == 0)
// 		return 1;
// 	if (nb < 0) { // meh, duplicate code, but works...
// 		if (power == -1)
// 			return  1 / (nb * ft_recursive_power(-nb, power + 1));
// 		else if (power < -1)
// 			return nb * ft_recursive_power(-nb, power + 1);
// 		return nb * ft_recursive_power(-nb, power - 1);
// 	} else {
// 		if (power == -1)
// 			return  1 / (nb * ft_recursive_power(nb, power + 1));
// 		else if (power < -1)
// 			return nb * ft_recursive_power(nb, power + 1);
// 		return nb * ft_recursive_power(nb, power - 1);
// 	}
// }