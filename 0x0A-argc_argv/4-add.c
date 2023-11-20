#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int check_digit(char *argum)
{
    unsigned int i = 0;
    while (i < strlen(argum))
    {
        if(!isdigit(argum[i]))
        {
            return (0);
        }
        i++;
    }
    return (1);
}


int main(int argc, char *argv[])
{
    int n, sum = 0, count = 1;

    while (count < argc)
    {
        if (check_digit(argv[count]))
        {
            n = atoi(argv[count]);
            sum += n;
        }
        else
        {
            printf("Error\n");
            return (1);
        }
        count++;
    }
    printf("%d\n", sum);
    return (0);
}