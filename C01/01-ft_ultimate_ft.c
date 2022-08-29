#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int    main(void)
{
	int    *********nbr; // WTF... FOR THE LOVE OF 神様 I SWEAR !
	int    ********bck8; 
	int    *******bck7; 
	int    ******bck6; 
	int    *****bck5; 
	int    ****bck4; 
	int    ***bck3; 
	int    **bck2; 
	int    *bck1; 
	int    bck0;

	bck1 = &bck0;
	bck2 = &bck1;
	bck3 = &bck2;
	bck4 = &bck3;
	bck5 = &bck4;
	bck6 = &bck5;
	bck7 = &bck6;
	bck8 = &bck7;
	nbr = &bck8; 
	ft_ultimate_ft(nbr);
	printf("nbr = %i\n", *********nbr);
}