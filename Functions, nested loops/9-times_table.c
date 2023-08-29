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
void times_table(void)
{
    int a, b, c;
    for (a = 0; a <= 9; a++)
    {
        for (b = 0; b <= 9; b++)
        {
            c = (a * b);
            {
                if (c <= 9)
                _putchar (c + '0');
                else
                {
                    _putchar ((c / 10) + '0');
                    _putchar ((c % 10) + '0');
                }
            }
            if (b < 9)
            {
                _putchar (',');
                _putchar (' ');
            }
        }
        _putchar ('\n');
    }
}

int main(void)
{
    times_table();
    return (0);
}