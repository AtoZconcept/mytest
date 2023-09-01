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

void print_line(int n)
{
    int a;
    if (n > 0)
    {
        for (a = 0; a < n; a++)
        _putchar('_');
    }
    _putchar('\n');
}
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}