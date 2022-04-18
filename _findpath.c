#include "shell.h"

/**
 * _findpath_ - function for find the PATH.
 * @env: array of environment variables.
 * Return: Array PATH or NULL if it fails.
 */

char *_findpath_(char **env)
{
	char *exppath, *path = "PATH=";
	int i, j, find = 0, k = 0;

	for (i = 0; env[i]; i++)
	{
		for (j = 0; env[i][j]; j++)
		{
			if (find)
			{
				_strcpy_(&exppath[k], &env[i][j]);
				k++;
			}
			if (env[i][j] != path[j] && !find)
				break;
			if (j == 4)
			{
				exppath = calloc(_strlen_(env[i]) + 1, sizeof(char));
				if (!exppath)
        			{
               				free(exppath);
                			return (NULL);
        			}
				find = 1;
			}
		}
		find = 0;
	}
	return (exppath);
}
