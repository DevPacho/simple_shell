#include "shell.h"

/**
 * _exit_ - function for exit and free line.
 * @line: char pointer input.
 */

void _exit_(char *line)
{
	free(line);
	exit(2);
}
