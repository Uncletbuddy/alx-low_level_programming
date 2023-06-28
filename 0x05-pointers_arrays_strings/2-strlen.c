#include "main.h"
#include <stdio.h>

/**
 * int _strlen - length of a string
 *
 * Return: always 0.
 */

int _strlen(char *s)
{
	int length = 0;
	while (*s != '\0')
	{
		length++;
		s++;	
	}

	return length;
}
