#include <stdio.h>
#include <unistd.h>
//int _putchar(char c);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c);
int print_last_digit(int r)
{
    int a;
    a = r % 10;
    if (a < 0)
    a = -a;
    _putchar(a + '0');
    return a;
}

int _putchar(char c)
{
    return (write(1, &c, 1));
}

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    //_putchar ('0' + 1);
    return (0);
}