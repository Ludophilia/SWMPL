#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
	char    lt;

	lt = 'a';
	while(lt <= 'z')
	{
		ft_putchar(lt);
		lt++;
	}
}

int    main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
}