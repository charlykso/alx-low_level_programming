#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a given position
 * @head: pointer to head pointer of double linked list
 * @index: index to delete node
 * Return: 1 if succeeded, or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	while ((index != 0) && (temp->next != NULL))
	{
		index -= 1;
		temp = temp->next;
	}

	if (index == 0)
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}

	return (-1);
}
