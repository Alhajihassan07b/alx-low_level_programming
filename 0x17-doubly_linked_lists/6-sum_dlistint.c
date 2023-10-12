#include "lists.h"
/**
 * sum_dlistint - function that return sum of nth data
 * @head: pointer to the node
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
