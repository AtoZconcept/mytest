#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
    int i, b, count = 0, r = 0;
    char *argument;

    if (ac == 0 || av == NULL)
        return (NULL);
    for (i = 0; i < ac; i++)
    {
        for (b = 0; av[i][b]; b++)
            count++;
    }
    count += ac;

    argument = malloc(sizeof(char) * (count + 1));
    if (argument == NULL)
        return (NULL);
    for (i = 0; i < ac; i++)
    {
    for (b = 0; av[i][b]; b++)
    {
        argument[r] = av[i][b];
        r++;
    }
    if (argument[r] == '\0')
    {
        argument[r++] = '\n';
    }
    }
    return (argument);
}

int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}