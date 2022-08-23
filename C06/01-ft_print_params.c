#include <stdio.h>
#include <unistd.h>

int    main(int argc, char **argv)
{	
	argv += 1;
	while(*argv)
	{
		while(**argv)
		{	
			write(1, &(**argv), 1);
			*argv += 1;
		}
		write(1, "\n", 1);
		argv += 1;
	}
}
