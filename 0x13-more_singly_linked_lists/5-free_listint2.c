#include "lists.h"
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  *free_listint2- frees a linked list
 *   *@head: The list to be freed
 *    *Return:nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head == NULL;
}
