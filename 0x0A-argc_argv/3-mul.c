#include <stdio.h>

/**
 * main - multiples two numbers
 * @argc: number of line arguments
 * @argv: array that contains the program command line arguments
 */

int main(int arg, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
