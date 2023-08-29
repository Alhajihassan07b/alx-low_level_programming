#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Pointer to the head of the list
 * Return: Size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	current = *h;

	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;

		/* Check if the current node points to a previous node */
		if (temp->next >= temp)
		{
			printf("Loop detected, freeing %d\n", temp->n);
			free(temp);
			*h = NULL;
			return (count);
		}

		free(temp);
	}

	*h = NULL;
	return (count);
}
