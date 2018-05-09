#include <stdio.h>

/* count blanks in input */
int main()
{
    int c, bl;
    
    bl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++bl;
        if (c == ' ')
            ++bl; //can't test for tabs because 
    }             //notepad++ just calls them spaces
    printf("%d\n", bl);
}