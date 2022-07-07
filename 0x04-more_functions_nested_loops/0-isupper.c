#include "main.h"
/**
 *_isupper()- Checks whether it is an uppercase
 *Return: 1 if it is an uppercase and 0 if it is not
 *@c: is a parameter to be checked
 */

int _isupper(int c)
{
	int i;

	for (i = 'A', i <= 'Z', i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
