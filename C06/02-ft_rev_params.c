#include <stdio.h>
#include <unistd.h>

int    main(int argc, char **argv)
{	
	int    j;
	char   c;

	while(argc > 1)
	{
		j = 0;
		while(argv[argc - 1][j])
		{	
			write(1, &(argv[argc - 1][j]), 1);
			j += 1;
		}
		write(1, "\n", 1);
		argc -= 1;
	}
}
