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

void print_triangle(int size)
{
    int a, b;
    if (size > 0)
    {
        if(size > 0)
        {
            for (a = 1; a < size; a++)
            _putchar(' ');
        }
        for (b = 0; b < size; b++)
        {
            _putchar('#');
            _putchar('\n');
        }
    }
}

int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}