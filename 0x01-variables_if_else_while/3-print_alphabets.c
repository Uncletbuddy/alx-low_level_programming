#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet in lower and upper case
 * Return: (0)
 */

int main(void)
{
	char n = 'a';
	char d = 'A';

	while (n <= 'z')
	{
	putchar(n);
	n++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}

		putchar('\n');
	return (0);
}
