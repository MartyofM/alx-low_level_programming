#include "main.h"

/**
 * flip_bits - ...
 * @b: ...
 * @c: ...
 * Return: ...
 */

unsigned int flip_bits(unsigned long int b, unsigned long int c)
{
	int l, count = 0;
	unsigned long int current;
	unsigned long int exclusive = b ^ c;

	for (l = 63; l >= 0; l--)
	{
		current = exclusive >> l;
		if (current & 1)
			count++;
	}
	return (count);
}
