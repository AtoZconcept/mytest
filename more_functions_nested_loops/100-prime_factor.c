#include <stdio.h>

int main(void)
{
    int b, a = 0;
    while(a < 612852475143)
    {
        b = 612852475143 % a;
        if(b == 0)
        {
            printf("%d", a);
        }
        //printf("%d", a);
        a++;
    }
    return (0);
}