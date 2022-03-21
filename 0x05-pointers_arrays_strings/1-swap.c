#include "main.h"

/**
 * swap_int(int *a, int *b)
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
