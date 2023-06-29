#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse
 * @s: parameter used printing the string
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int length = 0;
	int o;

	while (*s != '\0')
	{
		length++;
		s++;
	}
		s--;

	for (o = length; o > 0; o--)
	{
		putchar(*s);
		s--;
	}
		putchar('\n');
}
