#include <stdio.h>
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
    return (write (1, &c, 1));
}

void more_numbers(void)
{
    int a, b, c;
    for (a = 0; a <= 9; a++)
    {
        for (c = 0; c <= 14; c++)
        {
            if (c > 9)
            _putchar((c / 10) + '0');
            _putchar((c % 10) + '0');
        }
        _putchar('\n');
    }
}

int main(void)
{
    more_numbers();
    return (0);
}