#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_digits(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i == '7' && j == '8' && k == '9')
		ft_putchar('\n');
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void    ft_print_comb(void)
{
	int    i;
	int    j;
	int    k;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				if (i < j && j < k) // i != j && j != k && i != k && (バカ 😁)
					ft_print_digits(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

int    main(void)
{
	ft_print_comb();
}

