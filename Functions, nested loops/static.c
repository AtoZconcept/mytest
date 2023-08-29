#include <stdio.h>
int main ()
{
static int a;

for (a = 3; a <= 10; a += 3)
printf("%d\n", a);
return 0;
}