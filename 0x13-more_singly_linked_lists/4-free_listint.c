#include "lists.h"
/**
 * free_listint -function that frees a linked list
 * @head: head of linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *freenode = head;

	while (freenode != NULL)
	{
		listint_t *next = freenode->next;

		free(freenode);
		freenode = next;
	}
}
