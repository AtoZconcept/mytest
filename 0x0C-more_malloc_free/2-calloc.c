#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
}
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *cal;
    if (nmemb == 0 || size == 0)
        return NULL;
    cal = malloc(size * nmemb);
    if (cal == NULL)
        return NULL;
    _memset(cal, 0, size * nmemb);
    return cal;
}
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}