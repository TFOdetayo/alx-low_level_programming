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

	for (a = 1; a <= n; a++)
	{
		_putchar('/');
		for (b = 0; b < n; b++)
		{
			_putchar(' ');
		}
	}
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
