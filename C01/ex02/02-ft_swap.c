#include <stdio.h>

void    ft_swap(int *a, int *b)
{
	int    bff;

	bff = *a;
	*a = *b;
	*b = bff;
}

int    main(void)
{
	int    *nba;
	int    bcka;
	int    *nbb;
	int    bckb;

	nba = &bcka;
	nbb = &bckb;
	*nba = 42;
	*nbb = 24;
	printf("*nba = %i, *nbb = %i\n", *nba, *nbb);
	printf("nba = %p, nbb = %p\n", nba, nbb);
	ft_swap(nba, nbb);
	printf("*nba = %i, *nbb = %i\n", *nba, *nbb);
	printf("nba = %p, nbb = %p\n", nba, nbb);
}