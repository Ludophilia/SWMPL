#include <stdio.h>

int    ft_check_for_cap(int pos, char *str)
{	
	// if (pos < 0)
	// 	return (0);
	// else if (!(str[pos] >= 'a' && str[pos] <= 'z'))
	// 	return (0);
	if (pos == 0)
		return (1);
	else if (str[pos - 1] == ' ' || str[pos - 1] == '+' || 
		str[pos - 1] == '-')
		return (1);
	return (0);
}

int    ft_check_for_xupr(int pos, char *str)
{
	// if (pos <= 0)
	// 	return (0);
	if (str[pos - 1] == ' ' || str[pos - 1] == '+' || 
		str[pos - 1] == '-')
		return (0);
	else if (!(str[pos] >= 'A' && str[pos] <= 'Z'))
		return (0);
	return (1);
}

char    *ft_strcapitalize(char *str)
{
	int    i;

	i = 0;
	while(str[i])
	{
		if (ft_check_for_cap(i, str))
			str[i] -= ('a' - 'A');
		else if (ft_check_for_xupr(i, str))
			str[i] += ('a' - 'A');
		i++;
	}
	return (str);
}

int    main(void)
{
	char    str0[] = "salut, comment tu vas ? 42mots quarante-deux;"\
	" cinquante+et+un";
	char    str1[] = "sAlUt,+CoMMent tu+vAs?42MoTs-qUaRAnTe-DEuX;"\
	" CiNqUAnTE ET+uN";
	
	printf("%s\n", ft_strcapitalize(str0));
	printf("%s\n", ft_strcapitalize(str1));
}