#include "main.h"
/**
 * leet - encodes the characters
 * @s: the string to be encoded
 * Return: the encoded string
 */


char *leet(char *s)
{
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = b[j];
			}
		}
		i++;
	}
	return (s);
}

