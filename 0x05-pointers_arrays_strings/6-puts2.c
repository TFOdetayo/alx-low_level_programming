#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: the parameter.
 *
 * Return 0.
 */

void puts2(char *str)
{
	int num = 0, tot = 0;

	while (str[num++])
		tot++;

	{
		for (num = 0; num < tot; num += 2)
		{
			_putchar(str[num]);
		}
	}

	_putchar('\n');
}
