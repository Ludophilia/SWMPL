#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
	if (nb > 10 || nb < -10)
		ft_putnbr(nb / 10);
	if (nb < 0 && nb > -10) 
		ft_putchar('-');
	if (nb >= 0)
		ft_putchar(nb % 10 + '0');
	else
		ft_putchar(-(nb % 10) + '0');
}

int    main(void)
{
	int    arr[] = { INT_MIN, -420, -42, 0, 42, 420, INT_MAX };
	int    i;

	i = 0;
	while (i < (sizeof(arr)/sizeof(int)))
	{
		ft_putnbr(*(arr + i));
		ft_putchar('\n');
		i += 1;
	}
}