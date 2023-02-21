#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);
{
	char s;
	int i = 0;

	while (i <= 9)
	for (s = 'a'; s <= 'z'; s++)
	{
	_putchar(s);

	_putchar('\n');
	i++;
	}
}
