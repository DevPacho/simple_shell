#include "shell.h"

/**
 * _strtok_ - function for to make token the of line input for user.
 * @line: char pointer input.
 * @token: char input.
 * Return: the array token or NULL if fails.
 */

char **_strtok_(char *line, char token)
{
	int i, j = 0, k, len = 1024;
	char **array_token;

	if (!line)
		return (NULL);

	array_token = (char **)malloc(len * sizeof(char *));
	if (!array_token)
	{
		free(array_token);
		return (NULL);
	}

	array_token[j] = (char *)malloc(len * sizeof(char));
	if (!array_token[j])
	{
		free(array_token[j]), free(array_token);
		return (NULL);
	}

	for (i = 0, k = 0; line[i]; i++, k++)
	{
		if (line[i] == token)
		{
			array_token[j][k] = '\0', j++, k = 0;
			array_token[j] = (char *)malloc(len * sizeof(char));
			if (!array_token[j])
			{
				for (j--; j >= 0; j--)
					free(array_token[j]);
				free(array_token);
				return (NULL);
			}
		}
		if (line[i] == '\n')
			array_token[j][k] = '\0';
		else
			array_token[j][k] = line[i];
	}
	return (array_token);
}
