#include <stdio.h>

int    ft_is_prime(int nb)
{	
	int     pnb;

	if (nb < 2)
		return (0);
	pnb = 2;
	while (pnb <= nb / 2)
	{
		if (nb % pnb == 0)
			return (0);
		pnb++;
	}
	return (pnb);
}

int    main(void)
{
	int    test_nbr[] = { -1, 0, 1, 2, 10, 11, 21, 37, 59, 61, 67, 91 };
	int    i;
	
	i = 0;
	while (i < sizeof(test_nbr)/sizeof(test_nbr[0]))
	{	
		if (ft_is_prime(test_nbr[i]))
			printf("%i is prime\n", test_nbr[i]);
		i++;
	}
}

/* Previous attempts */

// int    ft_is_prime(int nb)
// {	
// 	int    i;
// 	int    ht;

// 	if (nb < 2)
// 		return (0);
// 	i = nb;
// 	ht = 0;
// 	while (i > 1) /* There is a better way (i > nb / i) that computes in log
// 	time */
// 	{
// 		if (nb % i == 0)
// 			ht += 1;
// 		i -= 1;
// 	}
// 	if (ht == 1)
// 		return (1);
// 	return (0);
// }