#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int    main(void)
{
	ft_putstr("");
	ft_putstr("Salut les piscineux\n");
	ft_putstr("おっ、向かってくるのか？\n");
}