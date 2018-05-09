#include <stdio.h>

//list all possible char values

char testchar;

int main()
{
    testchar = 1;
    while (testchar != 0)
        printf("%d\n", testchar++);
}