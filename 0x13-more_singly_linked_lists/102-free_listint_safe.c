#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr = NULL, *new, *add;
	listint_t *curr;

	while (*h != NULL)
	{
		/* Check for loop detection */
		add = hptr;
		while (add != NULL)
		{
			if (*h == (listint_t *)(add->p))
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
			add = add->next;
		}

		/* Create new node in the auxiliary list */
		new = malloc(sizeof(listp_t));
		if (new == NULL)
		{
			free_listp2(&hptr);
			exit(98);
		}
		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		/* Free current node from the main list */
		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	/* Clean up auxiliary list */
	free_listp2(&hptr);
	return (nnodes);
}
