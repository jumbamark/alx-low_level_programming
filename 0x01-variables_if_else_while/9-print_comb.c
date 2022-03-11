#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 if succesfully executed
 */
int main(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
	        if (m != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
