#include <stdio.h>

int main(void)
{
	int i = '0';

	while (i < '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return 0;
}
