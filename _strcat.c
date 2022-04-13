#include "shell.h"
/**
 * *_strcat - concatenates two array a dest with a source
 * @dest: pointer to char array input
 * @src: pointer to char array input
 * Return: pointer to char dest
 */
char *_strcat_(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; *(src + j) != '\0'; j++, i++)
		*(dest + i) = *(src + j);
	*(dest + i) = '\0';
	return (dest);
}
