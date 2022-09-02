#include "lists.h"

/**
 * dlistint_len - a function that returns the number
 * of elements in a linked list
 * @h: the head of the linked list
 *
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	if (h == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
