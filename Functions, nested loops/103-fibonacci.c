#include <stdio.h>

int main ()
{
    unsigned long int a, b, c, sum = 0;
    int d;

    a = 0;
    b = 1;
    
    while (c < 4000000)
    {
    c = a + b;
    a = b;
    b = c;
    {
        if ((c % 2) == 0)
        sum += c;
       // printf("%d\n", sum);
    }
    c++;
   // printf("%d\n", sum);
    }
    printf("%d\n", sum);
    return 0;
}