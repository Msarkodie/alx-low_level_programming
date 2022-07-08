#include "main.h"
#include <stdio>

/**
 * main- used as the fizzbuzz test
 * Return: Always 0
 */


int main(void)
{
	int counter

	for (counter = 1; counter <= 100; counter++)
	{
		if ((counter % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((counter % 5) == 0)
		{
			printf("Buzz");
		}
		else if (((counter % 5) == 0) && ((counter % 3) == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf(counter);
		}
	}
	printf('\n');
	return (0);
}



