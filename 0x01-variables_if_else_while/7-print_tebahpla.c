#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f;

	f = 'z';
	while (f >= 'a')
	{
		putchar(f);
		f--;
	}
	putchar('\n');
	return (0);
}
