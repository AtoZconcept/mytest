#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list word;
    char *str;

    va_start(word, n);
    for(i = 0; i < n; i++)
    {
        str = va_arg(word, char *);
        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);
        if (i < n - 1 && separator != NULL)
            printf("%s", separator);
    }
    va_end(word);
    printf("\n");
}