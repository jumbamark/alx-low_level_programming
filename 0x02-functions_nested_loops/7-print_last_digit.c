#include "main.h"
/**
 * print_lasr_digit - prints the last digit of a number
 * @x: int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
	int y = x % 10;

	if (y < 0)
		y = -y;
	else
		_putchar(y + '0');

	return (y);
}
