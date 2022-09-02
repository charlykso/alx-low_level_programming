#include "lists.h"

/**
 * print_dlistint - a function that prints doubly linked list data
 * @h: the head of the doubly linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	if (h == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		printf("%lu \n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
