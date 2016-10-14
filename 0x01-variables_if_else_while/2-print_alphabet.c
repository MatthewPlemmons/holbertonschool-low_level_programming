#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define NL '\n' 

int main(void)
{
    char c;

    c =  'a';
    while(c <= 'z')
    {
        putchar(c);
        c = c+1;  
    }
    putchar(NL);
    

    /*
    while (min_val != CHAR_MAX)
    {
        if (min_val == " ");
        {
	    printf("value: %d, is %i\n", min_val, min_val);
        }
        min_val = min_val+1; 
    }
    */
    return 0;
}
