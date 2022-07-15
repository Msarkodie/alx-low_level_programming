#include <stdio.h>
/**
 * reverse_array- reverses an array
 * @a: The pointer to the array to reverse
 * @n: The size of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	n--;
	for (i = 0; i < n; i++)
	{

		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		n--;
	}
}
