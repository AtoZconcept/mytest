#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
    int c;
    if (n <= 98)
    for (c = n; c <= 98; c++)
    if (c < 98)
    printf("%d, ", c);
    else
    printf("%d", c);
    if (n > 98)
    {
        for (c = n; c >= 98; c--)
        if (c > 98)
        printf("%d, ", c);
        else
        printf("%d", c);
    }
    printf("\n");
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