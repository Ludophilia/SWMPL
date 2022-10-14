#include <stdio.h>
#include <unistd.h>

int    main(int argc, char **argv)
{
	if (argc < 0)
		return (1);
	while(**argv)
	{	
		write(1, &(**argv), 1);
		*argv += 1;
	}
	argv += 1;
}

/*
int    main(int argc, char **argv)
{
	int    i;
	int    j;
	char    c;

	i = 0;
	while(i < argc)
	{
		j = 0;
		while(*(*(argv + i) + j)) // argv[i][j]. Alt : (j < strlen(*(argv + i))) 
		{	
			c = *(*(argv + i) + j); // argv[i][j]
			write(1, &c, 1);
			j += 1;
		}
		write(1, "\n", 1);
		i += 1;
	}
}
*/