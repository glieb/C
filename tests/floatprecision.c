#include <stdio.h>

//tests the precision of floats
int main()
{
    float atom = 1.0;
    while (atom / 2.0 != 0.0)
    {
        atom = atom / 2.0;
        printf("%f\n", atom);
    }
    printf("The Precision of C Floats is: %f\n", atom);
}

/* this test ended up failing because the floats being printed
 * were much shorter than the actual values being represented. */
