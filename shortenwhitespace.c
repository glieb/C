#include <stdio.h>

/* turns one or more spaces into one space*/
int main()
{
    int lastchar;
    int c;
    
    lastchar = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (lastchar != ' ')
                putchar(c);
        }
        if (c != ' ')
            putchar(c);
        lastchar = c;
    }
}