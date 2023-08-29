#include <stdio.h>

int main ()
{
    unsigned long int a, b, c;
    int d;

    a = 0;
    b = 1;
    for (d = 0; d < 50; d++)
    {
    c = a + b;
    printf("%lu", c);
    a = b;
    b = c;
    if (d < 49)
    printf(", ");
    }
    printf("\n");
    return 0;
}