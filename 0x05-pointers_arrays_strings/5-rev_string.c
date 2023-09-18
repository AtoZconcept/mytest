#include <stdio.h>
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}

void rev_string(char *s)
{
    int i, len = 0;
    char ch;
    while (s[len] != '\0')
    {
        len++;
    }
    for (i = 0; i < len / 2; i++)
    {
        ch = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = ch;
    }
}
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}