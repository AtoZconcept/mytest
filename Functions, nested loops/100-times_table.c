#include <stdio.h>
#include <unistd.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
void print_times_table(int n)
{
    int a, b, c;
    if (n > 0 && n <= 15)
    {
        a = 0;
        while(a <= n)
        {
            for (b = 0; b <= n; b++)
            {
                c = a * b;
                if (c < 10)
                _putchar(c + '0');
                else if (c > 9 && c < 100)
                {
                    _putchar((c / 10) + '0');
                    _putchar((c % 10) + '0');
                }
                else if (c > 99)
                {
                    _putchar((c / 100) + '0');
                    _putchar(((c / 10) % 10) + '0');
                    _putchar((c % 10) + '0');
                }
                if (b != n)
                _putchar(',');
                _putchar(' ');
            }
            _putchar('\n');
            a++;
        }
    }
}

int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);  
    return (0);
}