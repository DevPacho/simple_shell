#include "shell.h"

/**
 * _ts_handler_ - function for handler tabs and spaces.
 * @line: char pointer input.
 * Return: Nothing.
 */

void _ts_handler_(char *line)
{
	char *cpyline = calloc(_strlen_(line) + 1, sizeof(char));
	int i = 0, j = 0;

	_strcpy_(cpyline, line);
	while (cpyline[i])
	{
		if (cpyline[i] == ' ' || cpyline[i] == '\t')
		{
			if (i > 0 && (cpyline[i - 1] != ' ' && cpyline[i - 1] != '\t'))
				_strcpy_(&line[j], " "), j++;
			i++;
		}
		else
			_strcpy_(&line[j], &cpyline[i]), j++, i++;
	}
	if (line[j - 2] == ' ')
		line[j - 2] = '\0';
	free(cpyline);
}
