#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9.
 *
 * Return: 0
 */

void print_numbers(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
