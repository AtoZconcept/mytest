#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
    char *c = s;
    int len = 0;
    while(s[len] != '\0')
    {
        if (s[len] >= 'a' && s[len] <= 'z')
            s[len] = s[len] - 32;
        len++;
    }

    s = '\0';
    return c;
}
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}