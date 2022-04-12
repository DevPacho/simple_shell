#include "shell.h"

/**
 * main - main function.
 * Return: Always 0 (Succes).
 */

int main(int ac, char **av, char **env)
{
	(void) ac, (void) av;
	char *path = _findpath_(env), **tokenize_path = _strtok_(path, ':');
	char *line = NULL, *EXIT = "exit", **array_token, token = ' ';
	size_t len = 1024;
	int status;
	pid_t child_pid;

	free(path), line = (char *)malloc(len * sizeof(char));
	if (line == NULL)
		perror("Unable allocate buffer"), exit(EXIT_FAILURE);

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
			{
				child_pid = fork();
				if (child_pid == -1)
				{
					perror("Error:");
					return (1);
				}
				else if (child_pid == 0)
				{
					if (execve(array_token[0], array_token, NULL) == -1)
						printf("sh : %s: command not found\n", array_token[0]);
				}
				else
					wait(&status);
			}
		}
		_freestrs(array_token);
	}
	_freestrs(tokenize_path);
	_exit_(line);
	return (0);
}
