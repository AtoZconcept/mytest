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

void puts2(char *str)
{
    int i, len = 0;
    while(str[len] != '\0')
    {
        len++;
    }
    for (i = 0; i <= len; i++)
    {
        if (i % 2 == 0)
        {
            _putchar(str[i]);
        }
    }
}

int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}