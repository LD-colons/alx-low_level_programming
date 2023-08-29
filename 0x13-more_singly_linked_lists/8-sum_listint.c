#include "lists.h"
/**
 * sum_listint - returns sum all data(n) of linked list
 * @head: head of linked list
 * Return: sum of all data(n) or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	current = head;
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
