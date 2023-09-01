#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
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
   int c;

    for (c = 0; c <= 9; c++);
        //_putchar(c + '0');
        printf("%d", c);
//    _putchar ('\n');
}

int main(void)
{
    print_numbers();
    return (0);
}