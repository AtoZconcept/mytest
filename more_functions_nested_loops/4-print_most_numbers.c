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

void print_most_numbers(void)
{
    int i = 0;
    for (i = 0; i <= 9; i++)
    {
        if (i != 2 && i != 4)
        {
            _putchar('0' + i);
        }
    }
    _putchar('\n');
}

int main(void)
{
    print_most_numbers();
    return (0);
}