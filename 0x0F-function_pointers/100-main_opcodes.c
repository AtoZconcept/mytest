#include "function_pointers.h"

int main(int argc, char *argv[])
{
    int num1, i;
    char *code;
    num1 = atoi(argv[1]);
    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }
    if (num1 < 0)
    {
        printf("Error\n");
        exit(2);
    }
    code = (char *)main;
    for(i = 0; i < num1; i++)
    {
        if(i == num1 - 1)
        {
            printf("%02hhx\n", code[i]);
            break;
        }
        printf("%02hhx ", code[i]);
    }
    return (0);
}