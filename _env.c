#include "shell.h"

/**
 * _env_ - prints the environment.
 * @env: double pointer char input.
 * Return: Always 0 (Succes).
 */
void _env_(char **env)
{
	unsigned int i = 0;

	while (env[i] != NULL)
		write(1, env[i], _strlen_(env[i])), write(1, "\n", 1), i++;
}
