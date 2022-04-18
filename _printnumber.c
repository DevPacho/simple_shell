#include "shell.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printnumber_ - function prints an int.
 * @n: is the number
 */
void _printnumber_(int n)
{
	unsigned int aux1, aux2, aux3;
	int temp = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar(45);
	}
	aux1 = n;
	aux2 = n;
	if (aux1 > 9)
	{
		while (aux1 >= 10)
		{
			temp = temp * 10;
			aux1 /= 10;
		}
		_putchar((aux2 / temp) + 48);
		temp /= 10;

		for (aux3 = temp; aux3 >= 1; aux3 /= 10)
			_putchar((aux2 / aux3) % 10 + 48);
	}
	else
		_putchar(aux1 + 48);
}
