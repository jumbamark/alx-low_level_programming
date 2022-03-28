#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters
 * to match in s
 *
 * Return: number of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f , bool;

	f = 0;

	for (i = 0; s[i] = '\0'; i++)
	{
		bool = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			        f++;
			        bool = 1;
			}
		}
		if (bool == 0)
		{
			return (f);
		}
	}
	return (0);
}
