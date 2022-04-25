#include "lists.h"

/**
 * get_nodes_at_index - returns the nth node of a linked list
 * @head: head of a list
 * @index: index of the node
 *
 * Return: nth node, if the node does not exist, returns NULL
 */

listint_t *get_nodeint_at_index(listint *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
