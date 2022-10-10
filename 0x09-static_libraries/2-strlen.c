#include "main.h"

/**
 * _strlen - a function that prints the lenght of a string.
 * @s: the parameter.
 *
 * Return: 0.
 */

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}
