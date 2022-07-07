#include "main.h"

/**
 * print_numbers- print numbers from 0 to 9
 * Return: Returns nothing
 */

void print_numbers(void)
{
	char counter;

	for (counter = '0'; counter <= '9'; counter++)
	{
		_putchar(counter);
	}
	_putchar("\n")
