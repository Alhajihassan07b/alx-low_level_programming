#include "lists.h"
/**
 * listint_len - function that return number of element
 * @h: pointer to the node
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
