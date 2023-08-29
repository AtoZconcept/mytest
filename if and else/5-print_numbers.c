#include <stdio.h>

/**
 * main - Program that prints all single digit numbers of base 10 
 * starting from 0, followed by a new line
 * Return: (0) success
*/

int main()
{
    int a;
    for(a = 0; a < 10; a++)
    printf("%d", a);
    printf("\n");
    return 0;
}