#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it,
 *	followed by a new line.
 * @argc: The count of arguments passed into the program.
 * @argv: The arguments passed into the program.
 *
 * Return: 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%d\n", argc);

	return (0);
}
