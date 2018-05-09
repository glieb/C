#include <stdio.h>

/* numbers all of the unsigned chars */
int main()
{
    unsigned char x = 0;
    
    printf("%c ",x);
    printf("%d\n",x);
    x++;
    while (x != 0)
    {
        printf("%c ",x);
        printf("%d\n",x);
        x++;
    }
}
