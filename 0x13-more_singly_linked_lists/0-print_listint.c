#include "lists.h"
/**
 * print_listint - print all elements of the list
 * @h: pointer to head of the node
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *display = h;

	while (display != NULL)
	{
		printf("%d\n", display->n);
		count++;
		display = display->next;
	}
	return (count);
}
