#include "main.h"

/**
 * _isalpha - check for alphabet character
 * Description: we are using -putchar to check
 *
 * @c: parameter that collects the data
 * Return: 1 if c is low or cap otherwise 0
 */

int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'z'; upper++)
		{
			if (lower == c || upper == 'C')
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
