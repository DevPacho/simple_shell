#include "shell.h"
/**
 * _echo_ - function for to make token the of line input for user.
 * @str: char pointer input.
 * Return: the array token or NULL if fails.
 */
void _echo_(char *str)
{
	write(1, str, _strlen_(str));
}
