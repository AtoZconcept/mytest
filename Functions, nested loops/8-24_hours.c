#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}

void jack_bauer(void)
{
    int h, m;
    for (h = 0; h <= 24; h++)
    {
        for (m = 0; m <= 60; m++)
        {
        _putchar ((h / 10) + '0');
        _putchar ((h % 10) + '0');
        _putchar (':');
        _putchar ((m / 10) + '0');
        _putchar ((m % 10) + '0');
        _putchar ('\n');
        }
    }
}
int main(void)
{
    jack_bauer();
    return (0);
}