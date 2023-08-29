#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end.
 * @head: struct listint_s t
 * @n: integer
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;

	temp = *head;
	if (temp == NULL)
	{
		*head = add;
		return (*head);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = add;
	}
	return (add);
}
