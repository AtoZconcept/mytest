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

void puts_half(char *str)
{
    int i, n, length_of_the_string = 0;
    while (str[length_of_the_string] != '\0')
    {
        length_of_the_string++;
    }
    n = (length_of_the_string - 1) / 2;
    for (i = n + 1; i < length_of_the_string; i++)
    {
        _putchar(str[i]);
    }
}

int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}