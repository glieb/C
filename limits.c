#include <stdio.h>

char charlim;
short shortlim;
int intlim;
long longlim;

char findchar(void);
short findshort(void);
int findint(void);
long findlong(void);

//calculates max values for each datatype
int main()
{
    printf("Max Char: %d\n", findchar());
    printf("Max Short: %d\n", findshort());
    printf("Max Int: %d\n", findint());
    printf("Max Long: %d\n", findlong());
}

char findchar(void)
{
    charlim = 0;
    while (charlim + 1 > 0)
        charlim++;
    return charlim - 1;
}

short findshort(void)
{
    shortlim = 0;
    while (shortlim + 1 > 0)
        shortlim++;
    return shortlim - 1;
}

int findint(void)
{
    intlim = 0;
    while (intlim + 1 > 0)
        intlim++;
    return intlim;
}

long findlong(void)
{
    longlim = 0;
    while (longlim + 1 > 0)
        longlim++;
    return longlim;
}