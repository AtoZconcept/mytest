#include <stdio.h>
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}

char *_strcat(char *dest, char *src)
{
    int i, len = 0, count = 0;
    while (dest[len] != '\0')
    {
        len++;
    }
    
    while(src[count] != '\0')
    {
        //dest[len + count] = src[count];
        count++;
    }
    for(i = 0; i <= count; i++)
    {
        dest[len + i] = src[i];
    }
    return dest;
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}