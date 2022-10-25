#include "lists.h"


/**
* delete_nodeint_at_index - Removes the integer at the index specified from
* the linked list.
*
* @head: The pointer to the first node of the linked list.
* @index: The index to place this element at.
* Return: 1 if successful and -1 if not.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *next, *previous;
	unsigned int i;

	current = *head;
	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next; /* Move the context forward by 1 node */
		free(current); /* Deallocate the head */
		return (1);
	}

	/* While we are not at the end of this list... */
	while (current != NULL)
	{
		/* Advance the context of the linked list */
		previous = current;
		current = current->next;

		if (current != NULL)
			next = current->next;
		else
			next = NULL;
		i++;

		if (i == index)
		{
			/* Remove the current element */
			free(current);

			/* Fill the void left behind with this element */
			previous->next = next;
			return (1);
		}
	}

	return (-1);
}
