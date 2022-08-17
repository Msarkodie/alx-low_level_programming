#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint- Adds node at the beginning of the list
 * @head: The head of the list
 * @n: value of the number to be inserted
 * Return: The address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);

