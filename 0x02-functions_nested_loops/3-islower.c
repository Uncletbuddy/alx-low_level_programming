#include "main.h"
/**
 * _islower - detect lowercase and uppercase
 *
 * Descriptio: use -putchar to print
 * @c: parameter defined
 * Return: (1) if c is lower otherwise (0)
 *
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lower = 1;
		}
	}
	return (lower);
}
