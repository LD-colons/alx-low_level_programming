#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: head of linked list
 * @index: the index of the node
 * Return: nth node of linked list or NUL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
