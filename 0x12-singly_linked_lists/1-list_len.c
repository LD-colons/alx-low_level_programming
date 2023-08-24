#include "lists.h"
/**
 * list_len - number of elements in linked list
 * @h: pointer to the linked list
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *ptr = h;

	if (ptr == NULL)
		return (count);
	while (ptr != NULL)
	{
		count++;
		ptr->next;
	}
	return (count);
}
