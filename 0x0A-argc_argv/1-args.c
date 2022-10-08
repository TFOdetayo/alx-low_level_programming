#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it,
 *	followed by a new line.
 * @argc: The count of arguments passed into the program.
 * @argv: The arguments passed into the program.
 *
 * Return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
