#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits
 * Return: 0 if executed succesfully
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x == 0 && y == 0)
				continue;
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			if (x == 9 && y == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
