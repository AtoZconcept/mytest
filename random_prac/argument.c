#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char *argv[])
{
    // argv = ("ade", "bola", "dende");
    int c;
    char *val;
    printf("The number of arguments passed is %d\n", argc - 1);

    for (c = 1; c < argc; c++)
    {
        printf("Argument %d is %s\n", c, argv[c]);
    }

    int i;
    for(i = 0; environ[i] != NULL; i++)
    {
        printf("%d - [%s]\n", i + 1, environ[i]);
    }

    // if (setenv("USER", "Opeyemi", 1))
    // {
    //     return 1;
    // }

    val = getenv("USER");
    printf("The username is %s", val);
    // while (1)
    // {
    //     sleep(2);
    // }

    return 0;
}