#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * followed by a new line
 */

void print_most_numbers(void)
{
	int x = 0;

	for {; x < 10; x++)
	{
		if ((x == 2) && (x == 4))
			continue;
		else
			_putchar(x + '0');
	}
}
