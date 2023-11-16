#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
    int count = 0;
    if (*s)
    {
        
        count += _strlen_recursion(s + 1);
        count++;
    }
    return count;
}
int check_pel(char *s, int i, int count)
{
    if (*(s + i) != *(s + count - 1))
        return 0;
    if (i >= count)
        return 1;
    check_pel(s, i + 1, count - 1);
}
int is_palindrome(char *s)
{
if (*s == '\0')
    return (0);
check_pel(s, 0, _strlen_recursion(s));
}

int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}