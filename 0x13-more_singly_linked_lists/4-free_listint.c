#include "lists.h"
/**
 * free_listint - function that free listint
 * @head: pointer to node
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *next = current->next;
		free(current);
		current = next;
	}
}
