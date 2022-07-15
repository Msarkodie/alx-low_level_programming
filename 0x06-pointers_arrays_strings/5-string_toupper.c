#include "main.h"
/**
 * string_toupper - converts all lower case to upper
 * @s: The string in question
 * Return: the converted string
 */


char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) <= 'z' && *(s + i) >= 'a')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}
