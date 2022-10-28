#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char	**strs;
	int	i;

	if (argc != 3)
		return (1);
	strs = ft_split(argv[1], argv[2]);
	i = 0;
	while (strs[i])
	{
		printf("strs[%i]: '%s'\n", i, strs[i]);
		i++;
	}
	return (0);
}