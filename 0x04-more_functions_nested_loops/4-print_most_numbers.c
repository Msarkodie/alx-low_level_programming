#include "main.h"

/**
 *  * print_most_numbers- print numbers from 0 to 9 excludng 2 and 4
 *   * Return: Returns nothing
 */

void print_most_numbers(void)
{
	char counter;

	for (counter = '0'; counter <= '9'; counter++)
	{
		if (counter != '2' && counter != '4')
			_putchar(counter);
	}
	_putchar('\n');
}
