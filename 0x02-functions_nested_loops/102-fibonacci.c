#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int t1 = 1, t2 = 2, nextTerm = 0;
	nextTerm = t1 + t2;

	while (nextTerm <= 50)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");
	return (0);
}
