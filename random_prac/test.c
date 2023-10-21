#include <stdio.h>


void B(void (*ptr) ())
{
    ptr();
}
void A()
{
    printf("Hello");
}
int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int c;
    c = add(2, 3);
    printf("%d\n", c);
    B(A);
}