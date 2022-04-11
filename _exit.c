#include "shell.h"

/**
 * _exit - function for exit and free line.
 * @line: char pointer input.
 */

void _exit_(char *line)
{
	printf("exit\n");
	free(line);
	exit(EXIT_SUCCESS);
}
