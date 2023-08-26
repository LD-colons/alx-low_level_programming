#include "lists.h"
/**
 * add_node_end - the function that add new node at the end
 * @head: it where the node starts
 * @str: it the value of nodes
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = NULL;
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		list_t *ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
	}
		return (newnode);
}



