#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the node
 * @head: a pointer to a pointer of a node
 * Return: he head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
