#include "shell.h"

/**
 * _strcmp_ - concatenates two array a dest with a source
 * @s1: pointer to char array input
 * @s2: pointer to char array input
 * Return: pointer to char dest
 */
int _strcmp_(char *s1, char *s2)
{
	int i;

	for (i = 0; *(s1 + i) != '\0' || *(s2 + i) != '\0'; i++)
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
	return (0);
}
