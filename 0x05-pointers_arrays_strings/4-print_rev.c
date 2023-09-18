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

void print_rev(char *s)
{
    int i, len = 0;
 //   char c;
    while (s[len] != '\0')
    {
        len++;
    }
    for(i = len -1; i >= 0; i--)
    {
        _putchar(s[i]);
    }
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}