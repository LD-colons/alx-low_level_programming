#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning the linked list
 * @head: head of the linked list
 * @n: integer value of the node
 * Return: address of new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
