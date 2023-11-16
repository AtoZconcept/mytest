#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int calculate_square(int n, int i)
{
    if (i * i > n)
        return -1;
    if (i * i == n)
        return i;
    calculate_square(n, i + 1);
}
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    else
        calculate_square(n, 0);   
}
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}