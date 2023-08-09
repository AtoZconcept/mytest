#include "main.h"

/**
 * main - chech the code
 * @c:
 * @env: pointer of pointer
 * Return: Always 0
 */

int main(int c, char **env)
{
	(void)c;
	char *prompt = "(Simple Shell)$ ", *buffer = NULL, *path;
	size_t buffsize = 0;
	char *arg[11], *delim = "\n";
	int status, a, b, exe;
	ssize_t n_chars;
	pid_t Child_ID;

	while (1)
	{
		if(isatty(0))
			_printstring(prompt);

		n_char = getline(&buffer, &buffsize, stdin);

		if (n_chars == -1)
		{
			free(buffer);
			exit(0);
		}

		a = 0
			while
