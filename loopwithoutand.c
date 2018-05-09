#include <stdio.h>

int main()
{
    char c;
    int lim = 1000;
    char s[lim];
    int valid = 1;
    
    for (int i = 0; valid; i++)
    {
        char c = getchar();
        if (c == '\n')
            valid = 0;
        else if (c == EOF)
            valid = 0;
        else
            s[i] = c;
    }
    printf("%s", s);
}