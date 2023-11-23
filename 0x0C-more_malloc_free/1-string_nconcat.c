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
    unsigned int l1, l2, i, j;
    
    l1 = l2 = i = j = 0;
    while (s1[l1] != '\0')
    {
        l1++;
    }
    while (s2[l2] != '\0')
    {
        l2++;
    }
    if (n < l2)
        str = malloc(sizeof(char) * (l1 + n + 1));
    else
        str = malloc(sizeof(char) * (l1 + l2 + 1));
        
    if (str == NULL)
        return NULL;
    while (i < l1)
    {
        str[i] = s1[i];
        i++;
    }
    while (n > l2 && i < l2 + l1)
    {
        str[i++] = s2[j++];
    }
    while (n < l2 && i < l1 + n)
    {
        str[i++] = s2[j++];
    }
    str[i] = '\0';
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
