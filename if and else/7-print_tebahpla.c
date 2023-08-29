#include <stdio.h>

/**
 * main - Program that prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: Return (0) success
*/

int main()
{
    char c = 'z';
    while (c >= 'a')
    {
        putchar(c);
        c--;
    }
    putchar('\n');
    return 0;
}