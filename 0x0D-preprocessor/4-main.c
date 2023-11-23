#include <stdio.h>
#define SUM(x, y) ((x) + (y))
/**
 * main - check the code that computes the sum of the numbers x and y
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}