#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint- frees a linked list
 *@head: The list to be freed
 *Return: Returns nothing
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
	}

	while (temp != head)
	{
		free(temp->next);
	}
	free(head);
}
