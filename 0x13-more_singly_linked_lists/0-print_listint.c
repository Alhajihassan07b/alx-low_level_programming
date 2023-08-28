#include "lists.h"
/**
 * print_listint - function that print all the element
 * @h: pointer to the node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count;

	for (node_count = 0; h != NULL; node_count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}
