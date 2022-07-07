#include "main.h"

/**
 * print_square- prints a square
 * @size: The size of the square
 */

void print_square(int size)
{
	int length;
	int width;

	if (n > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
