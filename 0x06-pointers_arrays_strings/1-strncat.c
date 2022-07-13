#include "main.h"
/**
 * _strncat - concatenates two strings based on the n parameter
 * @dest: the dest parameter
 * @src: the src parameter
 * @n: The determining factor in the concatenation
 * Return: returns a pointer to the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[i] = src[j];
		}
		i++;
		j++;
	}
	return (dest);
}
