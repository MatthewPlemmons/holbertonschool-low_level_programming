#include <stdio.h>

int main(void)
{
    char c;

    c = '0';
    while (c <= '9')
    {
        putchar(c);
	if (c < '9')
	{
            putchar(44); /* 44 is the decimal value representing a comma in ascii */
 	    putchar(32); /* 32 is the decimal value for a SPACE */
	}
	c++;
    }
    putchar('\n');
    return 0;
}
