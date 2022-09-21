#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverseet number
 * @s: the parameter.
 * Return: 0.
 */

void print_rev(char *s)
{
	int c = strlen(s);

	while (c--)
	{
		_putchar(*(s + c));
	}
	_putchar(10);
}
