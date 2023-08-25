#include "lists.h"
/**
 * free_list - free the list
 * @head: pointer to header of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *newone = head;

	while (newone != NULL)
	{
		list_t *next = newone->next;

		free(newone->str);
			free(newone);
			newone = next;
	}
}
