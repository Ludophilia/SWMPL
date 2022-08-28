#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_digits(char i, char j, char k, char l)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(' ');
	ft_putchar(k);
	ft_putchar(l);
	if (i == '9' && j == '8')
		ft_putchar('\n');
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int    ft_numberize(char d, char u)
{
	int    num;

	num = (d - '0') * 10 + (u - '0');
	return (num);
}

void    ft_update_counter(char nbrs[4])
{
	nbrs[3]++;
	if (nbrs[3] > '9')
	{
		nbrs[3] = '0';
		nbrs[2]++;
	}
	if (nbrs[2] > '9')
	{
		nbrs[2] = '0';
		nbrs[1]++;
	}
	if (nbrs[1] > '9')
	{
		nbrs[1] = '0';
		nbrs[0]++;
	}
}

void    ft_print_comb2(void)
{
	char    nbrs[4] = { [0 ... 3] = '0' };

	while (nbrs[0] <= '9')
	{
		if (ft_numberize(nbrs[0], nbrs[1]) < ft_numberize(nbrs[2], nbrs[3]))
			ft_print_digits(nbrs[0], nbrs[1], nbrs[2], nbrs[3]);
		ft_update_counter(nbrs);
	}
}

int    main(void)
{
	ft_print_comb2();
}