#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a pointer to a pointer to a node.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
