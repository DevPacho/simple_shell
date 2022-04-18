#include "shell.h"

/**
 * _notfound_ - function to print that the command was not found.
 * @av: array of args passed to main.
 * @i: number of times the prompt is executed and displayed.
 * @array_token: char array input.
 */

void _notfound_(char *av, int i, char *array_token)
{
	char *two_p = ": ", *not_found = "not found\n";

	write(1, av, _strlen_(av));
	write(1, two_p, 2);
	_printnumber_(i);
	write(1, two_p, 2);
	write(1, array_token, _strlen_(array_token));
	write(1, two_p, 2);
	write(1, not_found, _strlen_(not_found));
}
