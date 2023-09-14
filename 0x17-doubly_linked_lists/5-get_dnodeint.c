#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of dlistint_t list
 * @index: int input
 *
 * Return: the node in th index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current && i != index)
	{
		current = current->next;
		i++;
	}
	if (i == index && current)
		return (current);
	return (NULL);
}
