#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int c;
    c =  'a';
    while(c <= 'z')
    {
        putchar(c);
        c = c+1;
    }
    putchar('\n');

    return 0;
}
