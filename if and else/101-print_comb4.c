#include <stdio.h>

/**
 * main - Program that prints all possible different combinations of two digits
 * Return: Return (0) success
*/

int main()
{
    int a,b,c;
    for (a = 48; a <= 55; a++)
    {
        for (b = 49; b <= 56; b++)
        {
            for (c = 50; c <= 57; c++)
            if(c > b && b > a)
            {
                putchar(a);
                putchar(b);
                putchar(c);
                if (a < 55 || c < 56)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
        
    }
    putchar('\n');
    return 0;
}