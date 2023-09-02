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

void print_diagonal(int n)
{
    int a, b;
    if (n > 0)
    {
        for (a = 0; a < n; a++)
        {
        if (a > 0)
        {
        b = 1;
        while (b <= a)
        {
                _putchar(' ');
                b++;
        }
        }
        _putchar('\\');
        _putchar ('\n');
        }
    }
   else
    {
        _putchar('\n');
    }
       
}

int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}