#include "main.h"
/**
 * _strncpy - copies src unto dest based on n
 * @dest: the buffer to be copied to
 * @src: the string to copy
 * @n: The determiner in the process
 * Return: the pointer to the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}

	while (i < n && src[i] == '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
