#include "shell.h"

/**
 * main - main function.
 * @ac: number args passed to main
 * @av: array of args passed to main
 * @env: array of var env
 * Return: Always 0 (Succes).
 */

int main(int ac, char **av, char **env)
{
	int i = 1, interactive = 0;
	char *path = _findpath_(env), **tok_path;
	char *line = NULL, *EXIT = "exit", *ENV = "env", **array_token;
	size_t len = 1024;
	(void) ac, (void) av;

	line = (char *)malloc(len * sizeof(char));
	if (line == NULL)
		perror("Unable allocate buffer"), exit(EXIT_FAILURE);

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			interactive = 1, write(1, "(devsjp@holberton $) ", 22);
		if ((getline(&line, &len, stdin)) == -1)
		{
			if (interactive)
				write(1, "\n", 1);
			free(path), _exit_(line);
		}
		if (line[0] != 10)
		{
			array_token = _strtok_(line, ' '), tok_path = _strtok_(path, ':');
			if (!_strcmp_(array_token[0], EXIT))
			{
				free(path), _freestrs_(array_token), _freestrs_(tok_path), free(line);
				exit(2);
			}
			if (!_strcmp_(array_token[0], ENV))
				_env_(env);

			else if (!_builtin_(tok_path, array_token[0]))
				_execute_(array_token);
			else
				_notfound_(av[0], i, array_token[0]);
			_freestrs_(array_token), _freestrs_(tok_path);
		}
		i++;
	}
	return (0);
}
