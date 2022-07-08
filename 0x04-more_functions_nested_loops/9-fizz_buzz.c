#include "main.h"
#include <stdio.h>

/**
 * main- used as the fizzbuzz test
 * Return: Always 0
 */


int main(void)
{
	int counter;

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
			printf("%i",counter);
		}
		if (counter < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}



