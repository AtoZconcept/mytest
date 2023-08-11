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
	char *prompt = "(Simple_Shell)$ ", *buffer = NULL, *path;
	size_t buffsize = 0;
	char *arg[11], *delim = "\n";
	int status, a, b, exe;
	ssize_t n_chars;
	pid_t Child_ID;

	while (1)
	{
		if(isatty(0))
			_printstring(prompt);

		n_chars = getline(&buffer, &buffsize, stdin);

		if (n_chars == -1)
		{
			free(buffer);
			exit(0);
		}

		a = 0;
			while (buffer[a])
			{
				if (buffer[a] == '\n')
					buffer[a] = 0;
				a++;
			}
		b = 0;
		arg[b] = strtok(buffer, delim);
		while (arg[b])
		{
			arg[++b] = strtok(NULL, delim);
		}
		arg[b] = NULL;

		path = get_loc(arg[0]);
		if (path == NULL)
		{
			if (_builtInCmd(arg) != 0)
			{
				continue;
			}
			else
				_printstring("Comand not found\n");
			continue;
		}

		Child_ID = fork();
		if (Child_ID < 0)
		{
			_printstring("Forking failed");
			free(buffer);
			exit(0);
		}
		else if (Child_ID == 0)
		{
			exe = execve(path, arg, env);
			if (exe == -1)
				_printstring("Command does not exist\n");
		}
		else
			wait(&status);
	}
	free(path);
	free(buffer);
	return (0);
}
