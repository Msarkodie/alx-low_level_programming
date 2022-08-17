#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint- frees a linked list
 *@head: The list to be freed
 *Return:nothing
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
