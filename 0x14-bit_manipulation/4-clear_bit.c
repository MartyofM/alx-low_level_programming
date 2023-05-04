#include "main.h"

/**
 * clear_bit - ...
 * @b: ...
 * @index: ...
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *b, unsigned int index)
{
	if (index > 63)
		return (-1);
	*b = (~(1UL << index) & *b);
	return (1);
}
