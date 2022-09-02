#include "lists.h"

/**
 * insert_node - insert node at given index
 * @tmp: ptr to nth position node in doubly linked list
 * @n: node data
 * Return: address of inserted node
 */
dlistint_t *insert_node(dlistint_t *tmp, int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(struct dlistint_s));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	new_node->next = tmp;
	new_node->prev = tmp->prev;
	tmp->prev->next = new_node;
	tmp->prev = new_node;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - create and insert node at nth index
 * @h: pointer to head of list
 * @idx: index
 * @n: node data
 * Return: address of inserted node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!h)
		return (NULL);

	temp = *h;
	while ((idx != 0) && (temp->next))
	{
		idx -= 1;
		temp = temp->next;
		if (idx == 0)
			return (insert_node(temp, n));
	}

	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
