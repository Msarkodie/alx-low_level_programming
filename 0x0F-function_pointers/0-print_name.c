#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name- prints a name
 * @name: pointer to the name
 * @f: pointer to the function that returs nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
