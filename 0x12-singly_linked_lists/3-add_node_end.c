#include "lists.h"
/**
 * add_node - the function that add new node at the end
 * @head: it where the node starts
 * @str: it the value of nodes
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp, *ptr;

		ptr = *head;
	temp = malloc(sizeof(list_t));
	temp->str = strdup(str);
	temp->next = NULL;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
