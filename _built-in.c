#include "shell.h"
/**
 * _builtin_ - find the function built-in or no built-in
 * @dest: pointer to char array input
 * @src: pointer to char array input
 * Return: pointer to char dest
 */
int _builtin_(char **path, char *cmd)
{
	int i;
	char *array_cat, slash = '/';
	struct stat st;

	if (!stat(cmd, &st))
		return (0);

	array_cat = malloc(bufsize * sizeof(char));
	for (i = 0; path[i]; i++)
	{
		array_cat = _strcat_(path[i], &slash);
		array_cat = _strcat_(array_cat, cmd);
		if (!stat(array_cat, &st))
		{
			cmd = _strcpy_(cmd, array_cat);
			free(array_cat);
			return (0);
		}
	}
	free(array_cat);
	return (1);
}
