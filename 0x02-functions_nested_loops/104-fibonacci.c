#include <stdio.h>

/**
 * numLength - returns the length of string
 *@num : operand number
 *Return: number of digits
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}
	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}
/**
 *  *main - print the first 98 fibonaci sequences
 *  Return:0
 */

int main(void)
{
