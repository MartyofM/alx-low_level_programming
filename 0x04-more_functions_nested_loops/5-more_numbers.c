#include "main.h"

/**
 * more_numbers - print 10 times the numbers sine 0 up to 14
 * Return: 10 times of the numbers since 0 up to 14
 */

void more_numbers(void)

{

	int c, f;

	for (c = 0; c < 10; c++)
	{
		for (f = 0; f <= 14; f++)
		{
			if (f > 9)
			{
				_putchar((f / 10) + '0');
			}
			_putchar((f % 10) + '0');
		}
		_putchar('\n');
	}
}
