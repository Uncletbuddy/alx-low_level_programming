#include "main.h"
/**
 * print_line - function that draws a straight line in a terminal
 * Description: The details of this is in the function described above
 * @n: input integer
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
