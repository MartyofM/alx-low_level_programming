#include <stdio.h>

/**
 * main - prints the first 52 fibonacci numbers
 * Return: Nothing!
 */

int main(void)

{
	int s = 0;
	long t = 1, r = 2;

	while (s < 50)
	{
	if (s == 0)
		printf("%ld", t);
	else if (s == 1)
		printf(", %ld", r);
	else
	{
		r += t;
		t = r - t;
		printf(", %ld", r);
	}
	++s;
	}
	printf("\n");
	return (0);
}
