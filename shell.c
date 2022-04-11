#include "shell.h"

/**
 *
 */

int main (void)
{
	char *line = NULL, *EXIT = "exit", **array_token, token = ' ';
	size_t len = 1024;

	line = (char *)malloc(len * sizeof(char));
	if (line == NULL)
	{
		perror("Unable allocate buffer");
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		printf("devspjm@holberton $ ");
		if ((getline(&line, &len, stdin)) == -1)
			break;
		if (line)
		{
			array_token = _strtok_(line, token);
			if (!_strcmp_(array_token[0], EXIT))
				_exit_(line);
			else
				printf("sh : %s: command not found\n", array_token[0]);
		}
	}
	_exit_(line);
	return (0);
}
