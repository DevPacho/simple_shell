#include "shell.h"

/**
 * _freestrs - function for free any string.
 * @str: string to free.
 */

void _freestrs(char **str)
{
	int i;

	for (i = 0; str[i]; i++)
		free(str[i]);
	free(str);
}
