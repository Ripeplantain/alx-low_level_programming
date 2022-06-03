#include <stdio.h>
/*
 * main - displays whats in the function
 * return - gives 0
 */

int main(void)
{
    char a;
    
    for (a = 'a'; a <= 'z'; a++)
        putchar(a);
    for (a = 'A'; a <= 'Z'; a++)
        putchar(a);
    putchar('\n');

    return 0;
}
