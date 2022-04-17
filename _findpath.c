#include "shell.h"

/**
 * _findpath_ - function for find the PATH.
 * @env: array of environment variables.
 * Return: Array PATH or NULL if it fails.
 */

char *_findpath_(char **env)
{
	char *exppath = calloc(bufsize, sizeof(char)), *path = "PATH=";
	int i, j, k = 0, find = 0;

	if (!exppath)
	{
		free(exppath);
		return (NULL);
	}

	for (i = 0; env[i]; i++)
	{
		for (j = 0; env[i][j]; j++)
		{
			if (find)
			{
				exppath[k] = env[i][j];
				k++;
			}
			if (env[i][j] != path[j] && !find)
				break;
			if (j == 4)
				find = 1;
		}
		find = 0;
	}
	return (exppath);
}
