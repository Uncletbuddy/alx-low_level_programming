#include "main.h"

/**
 * _puts - function that prints a string
 * @str: the parameter of the  printed
 * Return: Always 0.
 */

void _puts(char str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	 _putchar('\n');
}
