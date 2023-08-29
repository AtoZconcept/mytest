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

void print_numbers(void)
{
    char a;
    for (a = 48; a <= 57; a++);
    {
    _putchar ('a');
    }
    _putchar ('\n');
}

int main(void)
{
    print_numbers();
    return (0);
}