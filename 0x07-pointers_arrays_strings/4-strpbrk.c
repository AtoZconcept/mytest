#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
    int i, len = 0;
    for(; s[len] != '\0'; len++)
    {
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[len] == accept[i])
        {
            return (&s[len]);
        }
    }
    }
}
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}