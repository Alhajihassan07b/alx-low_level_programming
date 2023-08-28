#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node
 * @head: Pointer to the pointer of the first node
 * @index: Index of the node that should be deleted
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	/* Delete the first node (index 0) */
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	/* Traverse to the node before the desired index */
	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	/* Check if the node at the desired index exists */
	if (current == NULL || current->next == NULL)
		return (-1);

	/* Delete the node at the desired index */
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
