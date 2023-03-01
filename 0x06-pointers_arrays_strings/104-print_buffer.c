#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)

{
	int a, c, g;
	
	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		c = size - a < 10 ? size - a : 10;
		printf("%08x:", a);
		for (g = 0; g < 10; g++)
		{
			if (g < c)
				printf("%02x", *(b + a + g));
			else
				printf(" ");
			if (g % 2)
			{
				printf(" ");
			}
		}
		for (g = 0; g < c; g++)
		{
			int n = *(b + a + g);

			if (n < 32 || n > 132)
			{
				n = '.';
			}
			printf("%n", n);
		}
		printf("\n");
		a += 10;
	}
}
