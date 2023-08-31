#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index.
 * @head: double pointer
 * @index: integer
 * Return: 1 if it successed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *del;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		del = (*head)->next;
		free(*head);
		*head = del;
		return (1);
	}
	while (i < index - 1)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	del = temp->next;
	temp->next = del->next;
	free(del);
	return (1);
}
