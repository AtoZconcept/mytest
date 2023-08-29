#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

void print_to_98(int n)
{
    int a;
    if (n <= 98)
    {
        for (a = n; a <= 98; a++)
        if (a >= 0 && a < 10)
        {
        _putchar('0' + a);
        _putchar(',');
        _putchar(' ');
        }
        else if (a > 9)
        {
            _putchar((a / 10) + '0');
            _putchar((a % 10) + '0');
            if (a < 98)
            {
            _putchar(',');
            _putchar(' ');
            }
        }
       else if (a < 0)
        {
            printf("%d, ", a);
        }
    }
    else if (n > 98)
    {
       for (a = n; a >= 98; a--)
        if (a <= 99)
        {
          _putchar((a / 10) + '0');
            _putchar((a % 10) + '0');
            if (a != 98)
            _putchar(',');
            _putchar(' ');
       }
       else if (a > 99 && a < 110)
       {
        _putchar((a / 100) + '0');
        _putchar((a - a) + '0');
        _putchar((a % 10) + '0');
        _putchar(',');
            _putchar(' ');
      }
      else if (a >= 110)
      {
        _putchar((a / 100) + '0');
        _putchar((a / a) + '0');
        _putchar((a % 10) + '0');
        
        _putchar(',');
            _putchar(' ');
      }

    }
    _putchar('\n');
}
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}