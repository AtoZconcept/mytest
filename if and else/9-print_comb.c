#include <stdio.h>

/**
 * main - Program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 * Return: Return (0) success
*/

int main()
{
    int a;
    for (a = 48; a <= 57; a++)
    {
        putchar(a);
        if (a < 57)
            putchar(',');
            putchar(' ');
    }
    putchar('\n');
    return 0;
}