#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 *
 */

void print_triangle(int size)
{
	int count;
	int space;

	if (size > 0)
	{
		for (count = 1; count <= size; count++)
		{
			for (space = size - count; space > 0; space--)
					_putchar(' ');

			for (space = 0; space < count; space++)
				_putchar('#');

			if (count == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
