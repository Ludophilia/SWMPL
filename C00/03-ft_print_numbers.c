#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_numbers(void)
{
	char    lt;

	lt = '0';
	while(lt <= '9')
	{
		ft_putchar(lt);
		lt++;
	}
}

int    main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
}