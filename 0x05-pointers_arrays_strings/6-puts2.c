#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: the parameter.
 *
 * Return 0.
 */

void puts2(char *str)
{
	int num = 0;

	while (*(str + num))
	{
		_putchar(*(str + num));
		num += 2;
	}
	_putchar('\n');
}
