#include "main.h"

/**
 * binary_to_uint - ...
 * @n: ...
 *
 * Return: ...
 */

unsigned int binary_to_uint(const char *n)
{
	int j;
	unsigned int dec_val = 0;

	if (!n)
	{
		return (0);
	}
	for (j = 0; n[j]; j++)
	{
		if (n[j] < '0' || n[j] > '1')
		{
			return (0);
		}
		dec_val = 2 * dec_val + (n[j] - '0');
	}
	return (dec_val);
}
