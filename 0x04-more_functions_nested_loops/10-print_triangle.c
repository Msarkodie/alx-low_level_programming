#include "main.h"

/**
 *print_triangle- prints a triangle
 *@size: is the size of triangle
 *Return: 0 on success
 */

void print_triangle(int size)
{
	int i;
	int space;

	if (size > 0)
	{

		for (i = 1; i <= size; i++)
		{
			for (space = size - i; space > 0; space--)
			{
				_putchar(' ');
			}
			_putchar('#');
		}
	}
	else
	{
		_putchar('\n');
	}
}
