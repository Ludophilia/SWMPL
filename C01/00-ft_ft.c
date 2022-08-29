#include <stdio.h>

void    ft_ft(int *nbr)
{
	*nbr = 42;
}

int    main(void)
{
	int    *nbr; // IF ONLY WE CAN MALLOC THIS SHIT !
	int    bck; // IF NO BACKUP VAR, SEGFAULT !! 

	nbr = &bck; 
	ft_ft(nbr);
	printf("nbr = %i\n", *nbr);
}