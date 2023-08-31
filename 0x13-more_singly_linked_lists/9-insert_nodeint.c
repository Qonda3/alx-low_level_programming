#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer
 * @idx: position where the new node should be added.
 * @n: the number that is insert.
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *add, *temp;

	if (*head == NULL)
		return (0);
	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (add);
	}
	temp = *head;
	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(add);
		return (NULL);
	}
	add->next = temp->next;
	temp->next = add;
	return (add);
}
