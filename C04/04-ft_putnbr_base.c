#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_checkbase(char *base) {
  if (strcmp(base, "0123456789") == 0 || strcmp(base, "01") == 0 ||
      strcmp(base, "0123456789ABCDEF") == 0 || strcmp(base, "poneyvif") == 0){
    return (1);
  }
  return (0);
}

void ft_putnbr_base(int nbr, char *base) {
  char c;
  int radix;
  int rem;

  if (!ft_checkbase(base))
    return;
  radix = (int)strlen(base);
  rem = nbr % radix;
  if (nbr >= radix)
    ft_putnbr_base(nbr / radix, base);
  else
    write(1, "\n", 1);
  c = base[rem];
  write(1, &c, 1);
}

int main(void) {
  ft_putnbr_base(-255, "0123456789");
  ft_putnbr_base(-255, "01");
  ft_putnbr_base(-198, "0123456789ABCDEF");
  ft_putnbr_base(255, "poneyvif");
  ft_putnbr_base(198, "+01");
  ft_putnbr_base(198, "");
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