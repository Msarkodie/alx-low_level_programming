#include "main.h"
/**
 * _strcat-concatenates two strings
 * @dest: The base string
 * @src: The string to add to
 * Return: the pointer to the dest file
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
