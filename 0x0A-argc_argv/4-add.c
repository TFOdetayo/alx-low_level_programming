#include <stdio.h>
#include <stdlib.h>


/**
 * main - Prints the addition of positive numbers,
 *	followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *	Else return 0.
 */

int main(int argc, char *argv[])
{
	int i, num, result = 0;

	for (i = 1; i < argc; i++)
	{
		for (num = 0; argv[i][num]; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
