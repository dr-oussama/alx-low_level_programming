#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head of dlistint_t list
 * Return: number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	return (dlistint_len(h->next) + 1);
}
