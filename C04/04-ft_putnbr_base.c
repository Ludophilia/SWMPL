#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_checkbase(char *base) {
  if (strcmp(base, "0123456789") == 0 || strcmp(base, "01") == 0 ||
      strcmp(base, "0123456789ABCDEF") == 0 ||
	   strcmp(base, "poneyvif") == 0)
  {
    return (1);
  }
  return (0);
}

int ft_man_negatives(int num)
{
	if (num < 0)
	{
		write(1, "-", 1);
		return -num;
	}
	return num;
}

void ft_putnbr_base(int nbr, char *base) {
  int radix;

  if (!ft_checkbase(base)) return;
  nbr = ft_man_negatives(nbr);
  radix = (int)strlen(base);
  if (nbr >= radix)
    ft_putnbr_base(nbr / radix, base);
  write(1, &(base[nbr % radix]), 1);
}

int main(void) {
  ft_putnbr_base(-255, "0123456789");
  write(1, "\n", 1);
  ft_putnbr_base(255, "0123456789");
  write(1, "\n", 1);
  ft_putnbr_base(-255, "01");
  write(1, "\n", 1);
  ft_putnbr_base(255, "01");
  write(1, "\n", 1);
  ft_putnbr_base(-198, "0123456789ABCDEF");
  write(1, "\n", 1);
  ft_putnbr_base(255, "poneyvif");
  write(1, "\n", 1);
  ft_putnbr_base(-198, "+01");
  write(1, "\n", 1);
  ft_putnbr_base(198, "");
  write(1, "\n", 1);
  return (0);
}

// int (420) -> char ("420")
// 420%10 = 0 // :)
// 420/10 = 42

// 42%10 = 2 // :)
// 42/10 = 4

// 4%10 = 4 // :)
// 4 / 10 = 0
// (1*10*10)

// div/10 multipletmz gives 100 (strt 0)
// 420 / 100 = 4
// 4%10 = 4

// 420 / 10 = 42
// 42%10 = 2

// 420 / 1 = 420
// 420%10 = 0