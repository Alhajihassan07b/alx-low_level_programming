#include "lists.h"
/**
 * add_nodeint - function that add node at the beginning
 * @head: pointer to the node
 * @n: parameter
 * Return: number of node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
