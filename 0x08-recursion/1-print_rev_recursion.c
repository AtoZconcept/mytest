#include <unistd.h>

int _puthchar(char c)
{
    return (write(1, &c, 1));
}
void _print_rev_recursion(char *s)
{
    if(*s)
    {
        _print_rev_recursion(s + 1);
        _puthchar(*s);
    }
    else
        _puthchar('\0');
}
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}