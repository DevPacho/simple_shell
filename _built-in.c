#include "shell.h"
/**
 * _builtin_ - find the function built-in or no built-in
 * @path: double pointer to char array input
 * @cmd: pointer to char array input
 * Return: 1 if function is builtin or 0 if fun is no builtin
 */
int _builtin_(char **path, char *cmd)
{
	int i = 0;
	char *array_cat, *slash = "/";
	struct stat st;

	if (!stat(cmd, &st))
		return (0);

	for (i = 0; path[i]; i++)
	{
		array_cat = calloc(_strlen_(path[i]) + _strlen_(cmd) + 3, sizeof(char));
		_strcpy_(array_cat, path[i]);
		_strcat_(array_cat, slash);
		_strcat_(array_cat, cmd);
		if (!stat(array_cat, &st))
		{
			_strcpy_(cmd, array_cat);
			free(array_cat);
			return (0);
		}
		free(array_cat);
	}
	return (1);
}
