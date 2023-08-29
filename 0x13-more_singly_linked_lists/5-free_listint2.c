#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head: head of the linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *freenode;

	if (head == NULL)
	{
		return;
	}
	freenode = *head;
	while (freenode != NULL)
	{
		listint_t *next = freenode->next;

		free(freenode);
		freenode = next;
	}
	*head = NULL;
}
