#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: Pointer to the pointer of the first node of the list.
 * @idx: Index of the position
 * @n: Value to be assigned to the new node.
 * Return: Address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	/* Create a new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* Insert at the beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
