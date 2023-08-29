#include "lists.h"
/**
 * reverse_listint - reverse link list
 * @head: pointer to first node
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (NULL);
	prev = *head;
	*head = prev->next;
	prev->next = NULL;

	while (current != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		if (current == NULL)
			return (*head);
		*head = current;
	}
	if (*head == NULL)
	{
		*head = prev;
		return (*head);
	}

	return (NULL);
}
