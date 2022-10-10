#include "main.h"

/**
 * _isdigit - checks if a number is digit.
 *@c: the input.
 * Return: 1 or 0 depending on the input.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
