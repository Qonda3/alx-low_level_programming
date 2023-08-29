#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning
 * @head: double pointer
 * @n: integer
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (*head);
}
