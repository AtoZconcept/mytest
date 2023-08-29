#include <stdio.h>

int main()
{
    unsigned long int a, b, sum;
    int c;
    
    a = 0;
    b = 1;
    for (c = 0; c < 98; c++)
    {
        sum = a + b;
        printf("%lu", sum);
        a = b;
        b = sum;
        if (c < 97)
        printf(", ");
    }
    printf("\n");
    return 0;
    
}