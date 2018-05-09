#include <stdio.h>

#define TEMPS 15

float tempConv(int fahr);

float tempConv(int fahr)
{
    return (((fahr - 32) * 5) / 9);
}

int main()
{
    int temps[TEMPS+1];
    for (int i = 0; i <= TEMPS; i++)
    {
        temps[i] = i * 20;
        printf("%3d: %.1f\n", temps[i], tempConv(temps[i]));
    }
}