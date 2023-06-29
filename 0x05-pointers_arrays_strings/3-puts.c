#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * @str: the parameter of the  printed
 * Return: Always 0.
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
		 putchar('\n');
}
