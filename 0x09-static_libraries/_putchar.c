#include "main.h"
#include <unistd.h>

/**
 * _putchar - will output character c.
 * @c: The output
 *
 * Return: 0.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
