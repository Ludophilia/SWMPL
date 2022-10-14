#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
	int    bfr;

	if (*b == 0)
		return;
	bfr = *a;		
	*a = *a / *b; // *a /= *b
	*b = bfr % *b;
}

int    main(void)
{
	int    bcknb1;
	int    bcknb2;
	int    *nb1;
	int    *nb2;

	bcknb1 = 42;
	bcknb2 = 10;
	nb1 = &bcknb1;
	nb2 = &bcknb2;
	ft_ultimate_div_mod(nb1, nb2);
	printf("*nb1 = %i, *nb2 = %i\n", *nb1, *nb2);
	bcknb1 = 42;
	bcknb2 = 0;
	ft_ultimate_div_mod(nb1, nb2);
	printf("*nb1 = %i, *nb2 = %i\n", *nb1, *nb2);
}