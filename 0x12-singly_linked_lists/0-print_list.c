#include "lists.h"
/**
 * print_list - prints all element of linked list
 * @h: pointer to linked list
 * Return: number of node of linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d]%s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
