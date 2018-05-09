#include <stdio.h>
#define LIMIT 1000

// "escapes" special characters, ie newline becomes literal '\n' etc
int escape(char s[], char t[])
{
    for (int i, j = 0; s[i] != '\0'; i++)
    {
        switch (s[i])
        {
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
            default:
                t[j++] = s[i];
                break;
        }
    }
}

// takes input until EOF, then returns escaped version
int main()
{
    char s[LIMIT];
    char t[LIMIT];
    int i = 0;
    char c;

    for (i = 0; (c = getchar()) != EOF; i++)
        s[i] = c;
    s[i] = '\0';
    
    escape(s, t);
    for (i = 0; t[i] != '\0'; i++)
        putchar(t[i]);
}
