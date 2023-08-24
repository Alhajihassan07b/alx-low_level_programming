#include "lists.h"
/**
 * print_list - function that print all the element
 * @h: start pointer to linked
 * Return: number of node in the list
 */
size_t print_list(const list_t *h)
{
	int x;

	if (h == NULL)
		return (0);
	for (x = 1; h->next != NULL; x++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (x);
}
