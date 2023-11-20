#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int cent[] = {25, 10, 5, 2, 1};
    int change, i, count = 0;
    
    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    change = atoi(argv[1]);
    for (i = 0; i < 5; i++)
    {
        while(cent[i] <= change)
        {
            count++;
            change -= cent[i];
        }
    }
    printf("%d\n", count);
    return (0);
}