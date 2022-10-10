#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area.
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
