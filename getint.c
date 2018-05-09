#include <ctype.h>
#include <stdio.h>

#define BUFSIZE 1000

char buf[BUFSIZE];
int bufpos = 0;

int getch(void)
{
    return (bufpos > 0) ? buf[bufpos--] : getchar();
}

void ungetch(int c)
{
    if (bufpos >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufpos++] = c;
}

/* getint: get next integer from input into *pn */
int getint(int *pn)
{
    int c, sign;

    while (isspace(c = getch())) // skip white space
        ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-')
    {
        ungetch(c); // it is not a number
        return 0;
    }

    sign = (c == '-') ? -1 : 1;

    if (c == '+' || c == '-')
        c = getch();

    if (!isdigit(c))
        return 0; // empty plus or minus sign; not a valid entry

    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    
    *pn *= sign;

    if (c != EOF)
        ungetch(c);

    return c;
}

int main(void)
{
    int *input_int;
    getint(input_int);
    printf("%d\n", *input_int);
}

