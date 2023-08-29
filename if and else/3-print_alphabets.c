#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase, and then in uppercase
 * followed by a new line
 * Return: Return (0) success
*/

int main()
{
    char c = 'a';
    char ch = 'A';
    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    while (ch <= 'Z')
    {
        putchar(ch);
        ch++;
    }
    putchar('\n');
    return 0;
}