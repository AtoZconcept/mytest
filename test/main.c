#include "main.h"

int main(int c, char **argv)
{
	char *prompt, *buffer, *c_buffer, *token;
	size_t size = 0;
	ssize_t n_char;
	const char *delim = " \n";
	int a, n_token = 0;
	
	(void)c;
	while (1)
	{
		prompt = "(Shell)$ ";
		printf("%s", prompt);

	/* get what user type */	
		n_char = getline(&buffer, &size, stdin);

	/* to accept c + d exit */
		if (n_char == -1)
		{
			printf("Exit\n");
			return (-1);
		}
	/* to split command */
		c_buffer= malloc(sizeof(char) * n_char);
		if (c_buffer == NULL)
		{
			perror("memory allocation failed\n");
			return (-1);
		}

		strcpy(c_buffer, buffer);
		token = strtok(buffer, delim);
		while(token != NULL)
		{
			n_token++;
			token = strtok(NULL, delim);
		}
		n_token++;
		argv = malloc(sizeof(char *) * n_token);

		token = strtok(c_buffer, delim);
		for (a = 0; token != NULL; a++)
		{
			argv[a] = malloc(sizeof(char) * strlen(token));
			strcpy(argv[a], token);
			token = strtok(NULL, delim);
			printf("%s\n", argv[a]);
		}
	/*printf("%s\n", buffer);*/
	}
	free(buffer);
	free(argv);
	free(c_buffer);	

	return (0);
}
