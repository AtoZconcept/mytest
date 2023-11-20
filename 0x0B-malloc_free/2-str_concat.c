#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
    char *cat;
    int i, count = 0, len = 0;
    while(s1[count] != '\0')
        count++;
    while(s2[len] != '\0')
    {
        len++;
    }
    cat = malloc(sizeof(char) * (len + count + 1));
    if (cat == NULL)
        return NULL;
    count = len = 0;
    while(s1[count] != len)
    {
        cat[count] = s1[count];
        count++;
    }
    while(s2[len] != '\0')
    {
        cat[count] = s2[len];
        count++, len++;
    }
    cat[count] = '\0';
    return (cat);
}
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}