#include "main.h"

/**
 * print_alphabet -Print alphabet
 *
 */

void print_alphabet(void)
{
	char al;
	
	al = 'a';
	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
