#include <stdio.h>
#define SIZE 1024

/**
 * main - check the code that defines a macro named SIZE
 * as an abbreviation for the token 1024
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}