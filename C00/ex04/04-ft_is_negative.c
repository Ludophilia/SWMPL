#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

int    main(void)
{
	ft_is_negative(-42);
	//ft_putchar('\n');
	ft_is_negative(0);
	//ft_putchar('\n');
	ft_is_negative(42);
	//ft_putchar('\n');
}