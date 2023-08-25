#include "lists.h"
/**
 * free_list - free the list
 * @head: pointer to header of the list
 * Return: Nothing
 */
void free_list(list_h head)
{
	while (head != NULL)
	{
		list_t *next = head->next;
	free(head->str);
	free(head);
	head = next;
	}
}
