#include "lists.h"
/**
 * free_listint - function that free listint
 * @head: pointer to node
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
