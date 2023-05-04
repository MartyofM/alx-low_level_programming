#include "main.h"

/**
 * get_bit - ...
 * @b: ...
 * @index: ...
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int b, unsigned int index)
{
	int bit_val;

	if (index > 63)
	{
		return (-1);
	}
	bit_val = (b >> index) & 1;
	return (bit_val);
}
