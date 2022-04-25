#include "lists.h"

/**
 * free_listint2 - frees a linked list, sets head to NULL
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
