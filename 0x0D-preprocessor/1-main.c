#include <stdio.h>
#define PI 3.14159265359

/**
 * main - check the that code defines a macro named PI as an
 * abbreviation for the token 3.14159265359
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}