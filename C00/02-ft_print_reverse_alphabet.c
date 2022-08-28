#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_reverse_alphabet(void)
{
	char    lt;

	lt = 'z';
	while(lt >= 'a')
	{
		ft_putchar(lt);
		lt--;
	}
}

int    main(void)
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');
}