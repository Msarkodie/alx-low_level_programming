
#include <stdio.h>

/**
 * main- used as the fizzbuzz test
 * Return: 0 on success
 */


int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (counter % 5 == 0 && counter % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d",counter);
		}
		if (counter < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}



