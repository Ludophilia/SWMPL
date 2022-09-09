#include "04-ft_stock_str.h"

struct s_stock_str    *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str    *arr_of_stock;
	char    *dest;
	int    size;
	int    i;
	
	if (!(arr_of_stock = (t_stock_str*)malloc((ac + 1) * sizeof(t_stock_str))))
		return (NULL);
	i = 0;
	while (i < ac) 
	{
		size = ft_strlen(av[i]);
		if (!(dest = malloc((size + 1) * sizeof(char))))
			return (NULL);
		arr_of_stock[i].size = size;
		arr_of_stock[i].str = av[i];
		arr_of_stock[i].copy = ft_strcpy(dest, av[i]);
		i++;
	}
	arr_of_stock[i].str = 0;
	return (arr_of_stock);
}

int    main(void)
{
	char    **pstr;
	int    i;
	t_stock_str    *arr_of_stock;
	char    *strs[3] = { "Bienvenue !", "Comment allez-vous ?", 
	"Bien ??" };

	i = 0;
	pstr = (char**)malloc(3 * sizeof(char*));
	while (i < sizeof(strs)/sizeof(strs[0]))
	{
		pstr[i] = strs[i];
		i++;
	}
	arr_of_stock = ft_strs_to_tab(3, pstr);
	i = 0;
	while (i < 4)
	{
		printf("\nstruct %i: size : %i\n", i, arr_of_stock[i].size);
		printf("struct %i: str : %s\n", i, arr_of_stock[i].str);
		printf("struct %i: copy : %s\n", i, arr_of_stock[i].copy);
		i++;
	}
	return (0);
}

/* Last attempts.... */

// struct s_stock_str    *ft_strs_to_tab(int ac, char **av)
// {
// 	t_stock_str    *arr_of_stock;
// 	int    i;
	
// 	if (!(arr_of_stock = (t_stock_str*)malloc((ac + 1) * sizeof(t_stock_str))))
// 		return (NULL);
// 	i = 0;
// 	while (i < ac) 
// 	{
// 		int    size = ft_strlen(av[i]);
// 		char    *dest = malloc((size + 1) * sizeof(char));

// 		if (!dest)
// 			return (NULL);
// 		t_stock_str stock = {
// 			.size = ft_strlen(av[i]), 
// 			.str = av[i], 
// 			.copy = ft_strcpy(dest, av[i])
// 		};
// 		arr_of_stock[i] = stock;
// 		i++;
// 	}
// 	t_stock_str stock = {
// 		.size = 0, 
// 		.str = 0, 
// 		.copy = 0
// 	};
// 	arr_of_stock[i] = stock;

// 	return (arr_of_stock);
// }