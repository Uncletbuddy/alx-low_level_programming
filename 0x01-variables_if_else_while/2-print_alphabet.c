#include <stdio.h>
/**
 * main - Entry point
 * Description: Alphabet on small leters
 * Return: (0)
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
