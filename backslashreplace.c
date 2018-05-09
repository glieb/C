#include <stdio.h>

/* replaces backspaces, tabs, and backslashes */
int main()
{
    int c;
    
    while ((c = getchar()) != EOF)
    {
        if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        // else was not yet covered in the book when I wrote this
        if (c != '\b')
            if (c != '\t')
                if (c != '\\')
                    putchar(c);
    }
}
