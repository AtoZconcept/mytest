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
    int a, b = 0;
    if (n > 0)
    {
        while (b < n)
        {
                _putchar(' ');
        for (a = 0; a < n; a++)
        {
        _putchar('\\');
        _putchar ('\n');
        }
        //b++;
                }b++;
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