#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the argument
 *
 * Return: 0.
 */

void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			if (n > 0)
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
