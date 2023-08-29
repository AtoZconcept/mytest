#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int add(int a, int b)
{
    return a + b;
}
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}