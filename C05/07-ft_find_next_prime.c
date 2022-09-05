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

int    ft_find_next_prime(int nb)
{
	int    i;

	i = 0;
	while (!ft_is_prime(nb + i))
		i++;
	return (nb + i);
}

int    main(void)
{
	int    test_nbr[] = { -1, 0, 1, 2, 10, 11, 21, 37, 59, 61, 67, 91 };
	int    i;
	
	i = 0;
	while (i < sizeof(test_nbr)/sizeof(test_nbr[0]))
	{	
		printf("nbr : %i - next p : %i\n", 
		test_nbr[i], ft_find_next_prime(test_nbr[i]));
		i++;
	}
}