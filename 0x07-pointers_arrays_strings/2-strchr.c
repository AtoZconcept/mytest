#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
    int len;
    for(len = 0; s[len] != '\0'; len++)
    {
        if (s[len] == c)
        {
            return (&s[len]);
        }
    }
    return (0);
}
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}