#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
    char *dup;
    int i, count = 0;

    if (str == NULL)
        return (NULL);
    while (str[count] != '\0')
    {
        count++;
    }
    dup = malloc(sizeof(char) * count + 1);
    if (dup == NULL)
        return (NULL);
    for (i = 0; i < count; i++)
    {
        dup[i] = str[i];
    }
    return (dup);
}
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}