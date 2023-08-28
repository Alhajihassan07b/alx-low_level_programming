#include "lists.h"
/**
 * get_nodeint_at_index - function that return nth
 * @head: pointer to list
 * @index: no desired position of retrive
 * Return: pointer to a retrieve
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index; x++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
