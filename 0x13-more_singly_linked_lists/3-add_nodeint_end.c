#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end- Adds a node at the end of the list
 * @head: The head of the list
 * @n: The number to be added to the node
 * Return: the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head == new;

	}
	else
	{
		listint_t temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);

}
