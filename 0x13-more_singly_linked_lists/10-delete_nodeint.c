#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to the pointer of the head node.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *temp;
	unsigned int count = 0;

	if ((head == NULL) || (*head == NULL))
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current_node = *head;
	while (current_node != NULL)
	{
		if (count == index - 1)
		{
			if (current_node->next == NULL)
				return (-1);

			temp = current_node->next;
			current_node->next = temp->next;
			free(temp);
			return (1);
		}
		count++;
		current_node = current_node->next;
	}

	return (-1);
}
