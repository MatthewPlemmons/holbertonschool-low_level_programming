#include <stdio.h>

/**
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	(void) argv;

	while (argc >= 1)
	{
		printf("%i\n", argc - 1);
		return (0);
	}
	return (1);
}
