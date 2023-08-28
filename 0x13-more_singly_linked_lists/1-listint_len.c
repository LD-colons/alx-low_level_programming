#include "lists.h"
/**
 * listint_len - returns number of element in linked list
 * @h: pointer to first element of the linked list
 * Return: number of element of linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *nofele = h;

	while (nofele != NULL)
	{
		count++;
		nofele = nofele->next;
	}
	return (count);
}
