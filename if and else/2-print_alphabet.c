#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase, followed by a new line
 * Return: Return (0) success
*/

int main()
{
    char c = 'a';
    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    putchar('\n');
    return 0;
}