#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - calculate the number of nodes in the list
 * @h:The linked list head
 * Return:The number of list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d \n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
