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

int _atoi(char *s)
{
    int i, nb = 0, convert = 0, len = 0;
    while(s[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            convert = s[i] - '0';
            nb = nb * 10 + convert;
            if (s[i - 1] == '-')
                nb = -nb;
            if (s[i + 1] < '0' || s[i + 1] > '9')
                break;
        }
    }
    return nb;

}

int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}