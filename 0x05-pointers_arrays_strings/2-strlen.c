#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: Parameter used in discovering the length of a string
 *
 * Return: always 0.
 */

_strlen(char *s)
{

	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
