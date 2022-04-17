#include "shell.h"
/**
 * *_strcpy_ - copy two array a dest with a source
 * @dest: pointer to char array input
 * @src: pointer to char array input
 * Return: pointer to char dest
 */
void _strcpy_(char *dest, char *src)
{
	int i;

	if (!dest || !src)
		return;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
}
