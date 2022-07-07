#include "main.h"

/**
 *  * print_diagonal- prints a straight line
 *   * @n: The number of times the char should be printed
 */

void print_diagonal(int n)
{
	int space;
	int draw;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
			for (space = 1; space < draw ; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
