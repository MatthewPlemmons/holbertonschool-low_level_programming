#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main(void)
{
	char c;
	char C;

	c =  'a';
	C = 'A';

	while(c <= 'z')
	{
		putchar(c);
		c = c+1;
	}
	while(C <= 'Z')
	{
		putchar(C);
		C = C+1;
	}

	putchar('\n');
	return 0;
}
