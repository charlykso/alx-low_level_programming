#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that frees a listint_t list.
 * @head: a pointer to the head of the listint_t.
 *
 * Return: nothing
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	free(*head);
	*head = temp;
	return (i);
}
