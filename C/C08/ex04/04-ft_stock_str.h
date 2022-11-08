#ifndef FT_STOCK_STR
#define FT_STOCK_STR
#include <stdio.h>
#include <stdlib.h>

typedef struct    s_stock_str
{
	int    size;
	char    *str;
	char    *copy;
}    t_stock_str;
int    ft_strlen(char *str);
char    *ft_strcpy(char *dest, char *src);
struct s_stock_str    *ft_strs_to_tab(int ac, char **av);

#endif