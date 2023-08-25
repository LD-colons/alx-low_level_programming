#include "lists.h"
/**
 * free_list - free the list
 * @head: pointer to header of the list
 * Return: Nothing
 */
void free_list(list_h head)
{
	list_t *newone = header;

	while (newon != NULL)
	{
		list_t *next = newone->next;

		free(newone->str);
			free(newone);
			newone = next;
	}
}
