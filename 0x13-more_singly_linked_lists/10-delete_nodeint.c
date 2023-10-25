#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index.
 * @head: a pointer to a pointer to a node.
 * @index: is the index of the node.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *next, *temp;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	temp = *head;
	next = NULL;
	for (i = 0; temp != NULL && i < index; i++)
	{
		next = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	next->next = temp->next;
	free(temp);
	return (1);
}
