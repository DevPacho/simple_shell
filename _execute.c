#include "shell.h"
/**
 * *_execute_ - function for execute no built-in commands
 * @array_token: double pointer to char array input
 * Return: Nothing
 */
void _execute_(char **array_token)
{
	int status;
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
		perror("Error:");
	else if (child_pid == 0)
	{
		if (execve(array_token[0], array_token, NULL) == -1)
			perror("Error:");
	}
	else
		wait(&status);
}
