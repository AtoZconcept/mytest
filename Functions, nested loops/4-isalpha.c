#include <stdio.h>
#include <unistd.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z')  || (c >= 'A' && c <= 'Z'))
    return 1;
    //else if (c >= 'A' && c <= 'Z')
    //return 
    else 
    return 0;
}
int _putchar(char c)
{
    return (write(1, &c, 1));
}

int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}