#include <stdio.h>

#define MAXWORD 15
#define IN 1
#define OUT 0

int main()
{
    int c;
    int numchars;
    int histogram[MAXWORD+1];
    int state;
    
    numchars = 0;
    state = IN;

    for (int i = 0; i <= MAXWORD; ++i)
        histogram[i] = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            ++numchars;
            state = IN;
        }
        else
        {
            state = OUT;
        }
        if (state == OUT)
            if (numchars > 0 && numchars <= MAXWORD)
            {
                ++histogram[numchars];
                numchars = 0;
            }
    }
    
    for (int i = 1; i <= MAXWORD; ++i)
        printf("%2d: %d\n", i, histogram[i]);
}