#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    int i;
    printf("Size of a char: %d byte(s)\n", sizeof(char));
    printf("Size of an int: %d byte(s)\n", sizeof(int));
    printf("Size of a long int: %d byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
    printf("Size of a float: %d byte(s)\n", sizeof(float));
    printf("size of %lu %lu", c, i);
    malloc(sizeof(int));
    return 0;
}