#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *str;
    int l1, l2, i;
    
    l1 = l2 = 0;
    while (s1[l1] != '\0')
    {
        l1++;
    }
    while (s2[l2] != '\0')
    {
        l2++;
    }
    str = malloc(sizeof(char) * (l1 + l2 + 1));
    if (str = NULL)
        return NULL;
    l1 = l2 = 0;
    while(s1[l1] != '\0')
    {
        str[l1] = s1[l1];
        l1++;
    }
    if (n >= l2)
    {
        while (s2[l2] != '\0')
        {
            str[l1] = s2[l2];
            l1++, l2++;
        }
    }
    else
    {
        for (i = 0; s2[n]; i++)
        {
            str[l1] = s2[i];
            l1++;
        }
    }
    str[l1] = '\0';
    return str;
}

int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}