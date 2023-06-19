#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet in lower case reverse
 * Return: 0
 */

int main(void)
{
	char n = 'z';

	for (; n >= 'a'; n--)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}


