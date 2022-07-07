#include "main.h"

/**
 *more_numbers- prints 10times numbers form 0-14
 */

void more_numbers(void)
{
	int first_count;
	char second_count;

	for (first_count = 0; first_count < 10; first_count++)
	{
		for (second_count = 0; second_count <= 14 ; second_count++)
		{
			if ((second_count / 10) > 0)
			{
				_putchar((second_count / 10) + '0');
			}
			_putchar((second_count % 10) + '0');

		}
		_putchar('\n');
	}
}
