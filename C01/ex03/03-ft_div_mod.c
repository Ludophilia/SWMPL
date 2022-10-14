#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return;		
	*div = a / b;
	*mod = a % b;
}

int    main(void)
{
	int    bckdiv;
	int    bckmod;
	int    *div;
	int    *mod;

	div = &bckdiv;
	mod = &bckmod;
	ft_div_mod(42, 10, div, mod);
	printf("*div = %i, *mod = %i\n", *div, *mod);
	ft_div_mod(42, 0, div, mod);
	printf("*div = %i, *mod = %i\n", *div, *mod);
}