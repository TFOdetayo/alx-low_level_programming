#include "main.h"
#include "string.h"

/**
 * rev_string - a function that reverses a string.
 * @s: the parameter.
 *
 * Return: 0.
 */

void rev_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	while (a--)
		_putchar(s[a]);

	_putchar(10);
}
