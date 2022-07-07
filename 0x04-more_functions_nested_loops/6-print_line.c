#include "main.h"

/**
 * print_line- prints a straight line
 * @n: The number of times the char should be printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('-');
		}
	}
}
