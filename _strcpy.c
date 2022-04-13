#include "shell.h"
/**
 * *_strcpy_ - copy two array a dest with a source
 * @dest: pointer to char array input
 * @src: pointer to char array input
 * Return: pointer to char dest
 */
char *_strcpy_(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}
