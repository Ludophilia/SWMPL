#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int    ft_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void    ft_to_base_16(int i)
{
	char    *base_16 = "0123456789abcdef";

	ft_putchar('\\');
	ft_putchar(base_16[i / 16]);
	ft_putchar(base_16[i % 16]);
}

void    ft_putstr_non_printable(char *str)
{
	int    i;

	i = 0;
	while (str[i])
	{
		if (ft_is_printable(str[i]))
			ft_putchar(str[i]);
		else
			ft_to_base_16(str[i] % 256);
		i++;
	}
	ft_putchar('\n');
}

int    main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putstr_non_printable("Cou\x00cou\n\x03tu\x0Fvas\x17\nbien?");
}
