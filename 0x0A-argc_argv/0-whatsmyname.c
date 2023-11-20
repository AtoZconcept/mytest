#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int a = argc - 1;
    for(int i = 1; i <= a; i++)
    {
        printf("%s\n", argv[i]);
    }
    printf("%d\n", a);
    printf("\n-----------------\n");
    if (a != 2)
    {
        printf("Error\n");
        return(1);
    }
    int n = (atoi(argv[1]) * atoi(argv[2]));
    printf("%d\n", n);
    return (0);
}