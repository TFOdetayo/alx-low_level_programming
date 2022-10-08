#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *		If the program does not receive two arguments - 1.
 */

int main(int argc, char *argv[])
{
	int i, result = 1;

	for (i = 1; i < 3; i++)
	{
		if (argc != 3)
		{
			printf("error\n");
			return (1);
		}

		result = result * atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
