#include "lists.h"

/**
 * add_dnodeint_end - Write a function that adds
 * a new node at the end of a dlistint_t list.
 * @head: the head of the linked list
 * @n: the data to be inserted in the list
 *
 * Return: the address of the added node or NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = NULL;
		temp = new_node;
	}
	return (new_node);
}
