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
    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int a, b;

        for (a = 1; a <= size; a++)
        {
            for (b = a; b < size; b++)
            {
                _putchar(' ');
            }
            for (b = 1; b <= a; b++)
            {
                _putchar('#');
            }
            //c++;
            _putchar('\n');
        }
    }
    //_putchar('\n');
}

int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}