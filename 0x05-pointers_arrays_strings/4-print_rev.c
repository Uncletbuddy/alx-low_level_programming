#include "main.h"
#include <stdio>

/**
 * print_rev - print string in reverse
 * @*s: parameter used printing the string
 * Return: Always 0.
 */

void print_rev(char *s)

{
	int length = s;

	for (int i = length - 1; i >= 0; i--)
	{
		putchar(s[i])
	}
}
