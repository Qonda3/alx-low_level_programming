#include <stdlib.h>
#include <limits.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t.
 * @head: a pointer to a pointer to the head.
 * @n: integer to be added.
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head ==  NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
