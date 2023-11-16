#include <unistd.h>
#include <stdio.h>

int _puthchar(char c)
{
    return (write(1, &c, 1));
}
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
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}