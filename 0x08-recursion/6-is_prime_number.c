#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int caculate_prime(int n, int i)
{
    if (i == 1)
        return 1;
    if (n % i == 0)
        return 0;
    caculate_prime(n, i - 1);
}
int is_prime_number(int n)
{
    if (n <= 1)
        return 0;
    caculate_prime(n, n - 1);     
}
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}