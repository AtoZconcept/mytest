#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
    int a, b;
    for (b = 1; b <= 10; b++)
    {
        for (a = 'a'; a <= 'z'; a++)
            putchar(a);
            putchar('\n');
    }
}

int main(void)
{
    print_alphabet_x10();
    return (0);
}