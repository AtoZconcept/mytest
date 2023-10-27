#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
    int len = 0;
    while(s[len])
    {
        if(s[len] == 'a' || s[len] == 'A')
            s[len] = '4';
        if(s[len] == 'e' || s[len] == 'E')
            s[len] = '3';
        if(s[len] == 'o' || s[len] == 'O')
            s[len] = '0';
        if(s[len] == 't' || s[len] == 'T')
            s[len] = '7';
        if(s[len] == 'l' || s[len] == 'L')
            s[len] = '1';
        len++;
    }
    return s;
}
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}