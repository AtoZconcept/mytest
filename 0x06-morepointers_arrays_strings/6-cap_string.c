#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
    char *c = str;
    int len = 0;
    //char c = ',' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{' || '}';
    while(str[len] != '\0')
    {
        if (str[len] >= 'a' && str[len] <= 'z')
        {
            if (str[len - 1] == ',' || str[len - 1] == ' ' || str[len - 1] == '\n'
            || str[len - 1] == '\t' || str[len - 1] == ';' || str[len - 1] == '.'
            || str[len - 1] == '!' || str[len - 1] == '?' || str[len - 1] == '"'
            || str[len - 1] == '(' || str[len - 1] == ')' || str[len - 1] == '{'
            || str[len - 1] == '}'
            )
            {
                str[len] = str[len] - 32;
            }
        }
        len++;
    }
    str = '\0';
    return c;
}
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;
    char p[] = "afeez\tlasisi";

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    printf("%s", p);
    return (0);
}