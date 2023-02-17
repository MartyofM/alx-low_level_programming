#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char g;

	int r;

	g = 'a';
	while (r < 10)
	{
		putchar(r + '0');
		r++;
	}
	while (g <= 'f')
	{
		putchar(g);
		g++;
	}
	putchar('\n');
	return (0);
}
