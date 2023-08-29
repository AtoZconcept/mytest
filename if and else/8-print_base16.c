#include <stdio.h>

/**
 * main - Program that prints all the numbers of base 16 in lowercase
 * followed by a new line
 * starting from 0, followed by a new line
 * Return: Return (0) success
*/

int main()
{
    int a,b;
    for (a = 48; a < 58; a++)
    putchar(a);
    for (b = 97; b <= 102; b++)
    putchar(b);
    putchar('\n');
    return 0;
}