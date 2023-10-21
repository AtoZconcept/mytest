#include <stdio.h>

/**
 * main - Program that prints all possible different combinations of two digits
 * Return: Return (0) success
*/

int main()
{
    int a,b;
    for (a = 48; a <= 57; a++)
    {
        for (b = 49; b <= 57; b++)
        if(a < b)
        {
            putchar(a);
            putchar(b);
            if (a < 56)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    
    return 0;
}