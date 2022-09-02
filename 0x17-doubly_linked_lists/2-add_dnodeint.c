#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: the pointer to the head of the list
 * @n: the data that will be stored in the new node
 *
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (head == NULL)
	{
		*head = new_node;
	}
	else
	{
		new_node->n = n;
		new_node->next = (*head);
		new_node->prev = NULL;
		(*head) = new_node;
	}
	return (*head);
}
