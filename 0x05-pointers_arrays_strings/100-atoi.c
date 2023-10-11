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
    int sign = 1; // Initialize the sign to positive
    int result = 0;

    // Skip leading whitespace
    while (*s == ' ' || (*s >= 9 && *s <= 13))
    {
        s++;
    }

    // Check for sign character
    if (*s == '-' || *s == '+') 
    {
        if (*s == '-')
        {
            sign = -1; // Set the sign to negative if a minus sign is found
        }
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        // Check for potential overflow before adding the digit
        if (result > (2147483647 - (*s - '0')) / 10)
        {
            // Overflow detected
            if (sign == 1)
            {
                return 2147483647; // Return INT_MAX for positive overflow
            }
            else
            {
                return -2147483648; // Return INT_MIN for negative overflow
            }
        }

        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
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