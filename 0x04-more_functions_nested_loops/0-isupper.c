#include "main.h"
/**
 *_isupper()- Checks whether it is an uppercase
 *Return: 1 if it is an uppercase and 0 if it is not
 *@c: is a parameter to be checked
 */

int _isupper(int c)
{
	int i;

	for (i = 65, 1 < 91, i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
