#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements in a linked list
 * @h:The header of the linked list
 * Return:The number of elements in the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
}
	while (h != NULL)
	{
		printf("%d \n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
