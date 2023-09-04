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

void print_square(int size)
{
    if (size > 0)
    {
        int a, b;
        for (a = 0; a < size; a++)
        {
            for (b = 0; b < size; b++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
    else
    _putchar('\n');
}

int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}