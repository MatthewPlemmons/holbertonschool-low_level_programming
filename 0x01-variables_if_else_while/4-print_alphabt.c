#include <stdio.h>
#include <stdlib.h>

#define NL '\n'

int main(void)
{
	char c;
	c =  'a';

	while(c <= 'z')
	{
		if (c == 'e')
		{
			c = c+1;
		}

		else if (c == 'q')
		{
			c = c+1;
		}

		putchar(c);
		c = c+1;
	}

	putchar(NL);
	return 0;

}
